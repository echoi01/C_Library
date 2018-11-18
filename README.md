# C_Library
My implementation of some of the Standard C Library functions including some additional ones.

### Contents
* [What is C_Library?](#what-is-c_library)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)

### What is C_Library?
Re-creation of some standard C library functions including some additional ones to assist in the creation of C projects.


### How does it work?

The goal is to create a library called c_library.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/echoi01/C_Library
	cd c_library
	make copy
	make
  	make clean

You should see a *c_library.a* file and some object files (.o).

Calling `make clean` will remove the .o files and the .c files from the root

**WARNING:** `make clean` will delete all your files from your root directory. Do not run it if you're using the `Makefile` file. This is why I added the `Makefile-sample` file.


### What's in it?
Std Lib_C functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| libc_memalloc	| libc_lstnew		| libc_capitalize 
bzero		| libc_memdel		| libc_lstdelone	| libc_countwords 
memcpy		| libc_strnew		| libc_lstdel		| libc_islower    
memccpy		| libc_strdel		| libc_lstadd		| libc_isupper    
memmove		| libc_strclr		| libc_lstiter	| libc_strndup    
memchr		| libc_striter	| libc_lstmap		| libc_lst_reverse
memcmp		| libc_striteri	|				| libc_realloc
strlen		| libc_strmap		|				| libc_strjoinch
strdup		| libc_strmapi	|				| libc_strnchr
strcpy		| libc_strequ		|				| libc_copyuntil
strncpy		| libc_strnequ	|			| libc_strstartswith
strcat		| libc_strsub		| | libc_intlen
strlcat		| libc_strjoin	| | libc_strendswith
strchr		| libc_strtrim	| | libc_pathjoin
strrchr		| libc_strsplit	| | libc_lstaddback
strstr		| libc_itoa		| | get_next_line
strnstr		| libc_putchar	| | libc_putnstr
strcmp		| libc_putstr		| | libc_strreplace
strncmp		| libc_putendl	| | libc_isemptystr
atoi		| libc_putnbr		| | libc_strsplitall
isalpha		| libc_putchar_fd	| | libc_countwordsall
isdigit		| libc_putstr_fd	| | libc_freestrarr
isalnum		| libc_putendl_fd	| | libc_strjoincl
isascii		| libc_putnbr_fd	| | libc_strjoinchcl
isprint		|| | libc_count2darray
toupper		| | | libc_strarrmax
tolower		| | | libc_get_parent_path

