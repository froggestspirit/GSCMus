# GSCMus
An attempt to port the GSC Music engine to GBA

Music files will need to be converted to binary format with a base offset of 0.
GSCMusInit(song pointer) should be called once to load a song, then GSCMusLoop() should be called at the rate of 60fps

To convert, take the ASM file, first replace all instances of " ," with "," then " " with "," then finally all tabs with "," (see example asm files).
Clear out the green section in the spreadsheet, then paste the asm into it, separate columns by commas
Copy the blue area with the HEX numbers, paste them into a text editor, remove all tabs and newlines, then paste into a hex editor (I used wxHexEditor).
This conversion method is only temporary until a better one is made. Only the 4 included songs were tested, so some untested commands may not work.
