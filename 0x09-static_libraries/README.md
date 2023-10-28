# 0x09. C - Static libraries


Task-0

create Static Library

1- create function siles '.c'
	0-isupper.o
	0-memset.o
	0-strcat.o
	100-atoi.o
	1-isdigit.o
	1-memcpy.o
	1-strncat.o
	2-strchr.o
	2-strlen.o
	2-strncpy.o
	3-islower.o
	3-puts.o
	3-strcmp.o
	3-strspn.o
	4-isalpha.o
	4-strpbrk.o
	5-strstr.o
	6-abs.o
	9-strcpy.o
	_putchar.o

2- make C files '.c' object files '.o'
	$ gcc -c *.c		//all .c produce .o files

3- archieve all object files '.o' to archiev '.a' to create library mylib.a
	& ar -rc mylib.a *.o



Task-1

bash script to create static library

1- write commands
~~~
#!/bin/bash
gcc -o *.c
ar -rc liball.a *.o
~~~

2- add execute permissions
	$ chmod +x file.sh


