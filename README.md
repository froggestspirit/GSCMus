# GSCMus
An attempt to port the GSC Music engine to GBA

Music files will need to be converted to binary format with a base offset of 0.
gscMusPlay(song pointer) should be called once to load a song, then gscMusLoop() should be called at the rate of 60fps

To convert, run the convert.sh in pokecrystalMusic (Thanks to pret for the disassmbly!)
Songs that reference other songs will need their ASM modified to include their dependancies
