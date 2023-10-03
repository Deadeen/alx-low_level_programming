#!/bin/bash
mkdir -p temp_obj
for file in *.c; do
    gcc -c "$file" -o "temp_obj/${file%.c}.o"
done

ar rcs liball.a temp_obj/*.o

rm -rf temp_obj
