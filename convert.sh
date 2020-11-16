rm pokeemerald/sound/songs/gsc/*.gsc
rm pokeemerald/sound/gsc_songs.inc
rm pokeemerald/include/constants/gsc_songs.h
for FILE in asmSongs/*.asm;
do
    echo 'INCLUDE "constants.asm"' > /tmp/tempfile.asm
    echo 'SECTION "NULL", ROM0' >> /tmp/tempfile.asm
    cat $FILE >> /tmp/tempfile.asm
    rgbasm /tmp/tempfile.asm -o /tmp/tempfile.o
    rgblink -x /tmp/tempfile.o -o "${FILE%.asm}.gsc"
done;
rm /tmp/tempfile.asm
rm /tmp/tempfile.o
mv asmSongs/*.gsc pokeemerald/sound/songs/gsc/
touch pokeemerald/include/constants/gsc_songs.h
echo '    .align 2' > pokeemerald/sound/gsc_songs.inc
echo 'gscSongTable::' >> pokeemerald/sound/gsc_songs.inc
index=0
for FILE in pokeemerald/sound/songs/gsc/*.gsc;
do
    FNAME=${FILE##*/}
    UFNAME=${FNAME^^}
    echo '    	song GSCMus_'${FNAME%.gsc}', 0, 0' >> pokeemerald/sound/gsc_songs.inc
    echo '#define GSCMUS_'${UFNAME%.GSC}'    (GSC_MUS_START + '$index')' >> pokeemerald/include/constants/gsc_songs.h
    index=`expr $index + 1`
done;
echo '' >> pokeemerald/sound/gsc_songs.inc
for FILE in pokeemerald/sound/songs/gsc/*.gsc;
do
    FNAME=${FILE##*/}
    echo '    .align 2' >> pokeemerald/sound/gsc_songs.inc
    echo '    .global GSCMus_'${FNAME%.gsc} >> pokeemerald/sound/gsc_songs.inc
    echo 'GSCMus_'${FNAME%.gsc}':' >> pokeemerald/sound/gsc_songs.inc
    echo '    .incbin "sound/songs/gsc/'$FNAME'"' >> pokeemerald/sound/gsc_songs.inc
    echo '' >> pokeemerald/sound/gsc_songs.inc
done;
