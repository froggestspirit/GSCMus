# GSCMus
An attempt to port the GSC Music engine to GBA

Music files will need to be converted to binary format with a base offset of 0.
gscMusPlay(song pointer) should be called once to load a song, then gscMusLoop() should be called at the rate of 60fps

To convert, run the convert.sh in pokecrystalMusic (Thanks to pret for the disassmbly!)
Songs that reference other songs will need their ASM modified to include their dependancies

To install in pokeemerald, copy the contents of this pokeemerald folder to your pokeemerald project AFTER converting

First time installation steps (after this initial install, only the above step needs to be repeated to update songs):

1. in include/constants/songs.h, near the bottom of the file, add this after the last song and before MUS_ROUTE118:
#define GSC_MUS_START               610
#include "constants/gsc_songs.h"
the 610 should be adjusted if you have changed the amount of normal m4a music, so it is the next number after the last song

2. in include/gba/m4a_internal.h, search for:
extern const struct Song gSongTable[];
below it, add:
extern const struct Song gscSongTable[];

3. in src/m4a.c, add:
#include "gsc_mus.h"
#include "constants/songs.h"
under the other includes

4. in src/m4a.c, search for:
void m4aSongNumStart(u16 n)
replace the function with this:
void m4aSongNumStart(u16 n)
{
    const struct MusicPlayer *mplayTable = gMPlayTable;
    if(n >= GSC_MUS_START && n < MUS_ROUTE118){
        const struct Song *songTable = gscSongTable;
        const struct Song *song = &songTable[n - GSC_MUS_START];
        const struct MusicPlayer *mplay = &mplayTable[song->ms];
        gscMusStop();
        gscMusPlay(song->header);
    }else{
        const struct Song *songTable = gSongTable;
        const struct Song *song = &songTable[n];
        const struct MusicPlayer *mplay = &mplayTable[song->ms];
        if(song->ms == 0) gscMusStop();
        MPlayStart(mplay->info, song->header);
    }
}

5. in src/m4a.c, search for void m4aSoundMain(void) and add:
gscMusLoop();
under SoundMain();

6. in src/m4a.c, search for void m4aSongNumStop(u16 n) and add:
gscMusStop();
under m4aMPlayStop(mplay->info);

7. in data/sound_data.s under .include "sound/song_table.inc", add:
	.include "sound/gsc_songs.inc"
