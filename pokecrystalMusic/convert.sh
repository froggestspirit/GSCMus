rm audio/music/*.bin
for FILE in audio/music/*.asm;
do
    echo 'INCLUDE "constants.asm"' > /tmp/tempfile.asm
    echo 'SECTION "NULL", ROM0' >> /tmp/tempfile.asm
    cat $FILE >> /tmp/tempfile.asm
    rgbasm /tmp/tempfile.asm -o /tmp/tempfile.o
    rgblink -x /tmp/tempfile.o -o "${FILE%.asm}.bin"
done;
rm /tmp/tempfile.asm
rm /tmp/tempfile.o
