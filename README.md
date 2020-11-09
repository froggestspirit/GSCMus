# GSCMus
An attempt to port the GSC Music engine to GBA

Music files will need to be converted to binary format with a base offset of 0.
GSCMusInit(song pointer) should be called once to load a song, then GSCMusLoop() should be called at the rate of 60fps
