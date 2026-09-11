## Makefile
Makefiles are used when you need to perform a series of instructions depending on the modification of certain files. And it's used in this project to compile each `.c` file into an object code file `.o`. Objects files are then linked together into an archive library `.a` file, which basically is then compiled to produce an executable file.

### Compiling source code to object code
```bash
cc -o ${filename}.c
```
This produces the object file `.o`, which is a binary machine language which contains unresolved external references. Each file is explicitely compiled into an object file so that when re-compiling the program, only the modified files are recompiled. This helps with optimizing the program instead of recompiling all files in the program.

### Creating an archived library
```bash
ar -rcs libft.a *.o
```
This produces an archived library, and as one of our resources mentions:
>  An archive is a collection of object files (.o files), and the archive file has a .a extension in Unix-like systems (e.g., Linux or macOS). The archive allows multiple object files to be grouped into one file, making it easier to link them with your program. <sup>1</sup>\
`c` creates the library in case it didn't exist.\
`r` replaces the old files with the new files if the library already exists.\
`s` creates a sorted index of the library.

# Resources
https://diveintosystems.org/book/C2-C_depth/advanced_writing_libraries.html (for implementing libraries)\
https://www.geeksforgeeks.org/c/compiling-a-c-program-behind-the-scenes (compilation process)\
https://diveintosystems.org/book/C2-C_depth/advanced_libraries.html (a little more detailed compilation process)\
<sup>1</sup>https://wiki.imindlabs.com.au/cs/usp/4_c_revision/4_2_static_lib (Archived library)
