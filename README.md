## Makefile
Makefiles are used when you need to perform a series of instructions depending on the modification of certain files. And it's used in this project to compile each `.c` file into an object code file `.o`. Objects files are then linked together into an archive library `.a` file, which basically is then compiled to produce an executable file.

## Compiling to object code
```bash
cc -o ${filename}.c
```
This produces the object file `.o`, which are binary machine language but they contain unresolved external references. Each file is explicitely compiled into an object file so that when re-compiling the program, only the modified files are recompiled. This helps with optimizing the program instead of recompiling all files in the program.

# Resources
https://diveintosystems.org/book/C2-C_depth/advanced_writing_libraries.html (for implementing libraries)\
https://www.geeksforgeeks.org/c/compiling-a-c-program-behind-the-scenes (compilation process)\
https://diveintosystems.org/book/C2-C_depth/advanced_libraries.html (a little more detailed compilation process)
