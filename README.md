## Makefile
Makefiles are used when you need to perform a series of instructions depending on the modification of certain files. And it's used in this project to compile each `.c` file into an object code file `.o`. Objects files are then linked together into an archive library `.a` file, which basically is then compiled to produce an executable file.

### Variables
```
src := $(wildcard *.c)
```
Basically selects all files with the extension `.c` (all C source code files).
```
obj := $(src:.c=.o)
```
This part replaces the resulting files' (the files saved in src) extension from `.c` to `.o`.
The reason we use a replacement method instead of directly searching for files with the extension `.o` is that the source code could be not compiled yet into an object code, so the result of searching for the files wouldn't find the files we want.

### Compiling source code to object code
```bash
%.o: %.c
  cc -c $<
```
Here, the `%` wildcard says 'replace this with anything', and with the `.c` appended to it, means 'replace it with all files with the extension `.c`'. same goes for `%.o`.
But the interesting thing is `%` represents the same value/result on each side.
For example, if the first part (target) evaluates to `ft_atoi.o`, then the second (dependency) part evaluates to `ft_atoi.c`.
And, `$<` expression is an automatic variable to represent the first dependency.\
So, it evaluates to:
```bash
$(filename).o: $(filename).c
  cc -c $(filename).c
```
This produces the object file `.o`, which is a binary machine language which contains unresolved external references. Each file is explicitely compiled into an object file so that when re-compiling the program, only the modified files are recompiled. This helps with optimizing the program instead of recompiling all files in the program.

### Creating an archived library
```bash
ar -rcs libft.a *.o
```
This produces an archived library, and as one of our resources mentions:
>  An archive is a collection of object files (.o files), and the archive file has a .a extension in Unix-like systems (e.g., Linux or macOS). The archive allows multiple object files to be grouped into one file, making it easier to link them with your program. <sup>1</sup>

`c` creates the library in case it didn't exist.\
`r` replaces the old files with the new files if the library already exists.\
`s` creates a sorted index of the library.

## Linked Lists
Linked lists are dynamic data structure which uses pointers for its implementation which acts like an array for storing data with few differences.
Linked lists are implemented using `structs`, which are:
> A structure in C is a user-defined data type that groups related variables of different data types under a single name. <sup>2</sup>

# Resources
https://diveintosystems.org/book/C2-C_depth/advanced_writing_libraries.html (for implementing libraries)\
https://www.geeksforgeeks.org/c/compiling-a-c-program-behind-the-scenes (compilation process)\
https://diveintosystems.org/book/C2-C_depth/advanced_libraries.html (a little more detailed compilation process)\
<sup>1</sup>https://wiki.imindlabs.com.au/cs/usp/4_c_revision/4_2_static_lib (Archived library)\
https://makefiletutorial.com (Makefile, helped specially with wildcards)\
https://www.learn-c.org/en/Linked_lists (linked lists)\
https://www.geeksforgeeks.org/c/structures-c (C structs)\
<sup>2</sup>https://www.geeksforgeeks.org/c/structures-c/ (C structs)
