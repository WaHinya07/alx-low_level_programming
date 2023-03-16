MORE MALLOC

Application of;

Exit
A function that terminates a process.

Realloc
The realloc() function is used to resize a memory block that was previously allocated with a call to malloc or calloc.
It returns a pointer to the newly allocated memory, which is suitably aligned for any kind of variable.
The contents will be unchanged in the range from the start of the region up to the minimum of the old and new sizes.

Calloc
The calloc() library function allocates memory for an array of nmemb elements
of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero.If nmemb or size is 0, then calloc() returns either NULL
or a unique pointer value that can later be successfully passed to free()
The difference in malloc and calloc is that malloc does not set the memory to zero
whereas calloc sets allocated memory to zero.
