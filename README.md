__PRINTF__

__REQUIREMENTS__

__General__

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty Style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You don't have to push your test files, we will use our own
* The prototypes of all your functions should be included in your header file called main.h
* Don't forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the \_putchar function for this project

__GitHub__

_There should be one project repository per group. if you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score._

__MORE INFO__

__Authorised Functions and Macros__

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

__Compilation__

* Your code will be compiled this way:
	$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
* As a consequence, be carefull not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your test files includung main functions)
* Our main files will include your header file (main.h): #include main.h
* You might want to look at the gcc flag -Wno-format when testing with your \_printf and the standard printf.
* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as printf

__Tasks__

0. Write a function that produces output according to a format.
*	Prototype: int \_printf(const char \*format, ...);
*	Returns: the number of characters printed (excluding the null byte used to end output to strings)
*	write output to stdout, the standard output stream
*	format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to hundle the following conversion specifiers:
*		c
*		s
*		%
*	You don't have to reproduce the buffer handling of the C library printf function
*	You don't have to handle the flag characters
*	You don't have to handle field width
*	You don't have to handle precision
*	You don't have to handle the length modifiers
__Repo:__
*	GitHub repository: printf

1. Handle the following conversion specifiers:
*	d
*	i
*	You don't have to handle the flag characters
*	You don't have to handle field width
*	You don't have to handle precision
*	You don't have to handle the length modifiers
__Repo:__
*	GitHub repository: printf

2. Create a man page for your function.
__Repo:__
*	GitHub repository: printf

3. Handle the following custom conversion specifiers:
*	b: the unsigned int argument is converted to binary
__Repo:__
*	GitHub repository: printf

4. Handle the following conversion specifiers
*	u
*	o
*	x
*	X
*	You don't have to handle the flag characters
*	You don't have to handle field width
*	You don't have to handle precision
*	You don't have to handle the length modifiers
__Repo:__
*	GitHub repository: printf

5. Use a local buffer of 1024 chars in order to call write as little as possible.
__Repo:__
*	GitHub repository: printf

7. Handle the following custom conversion specifier:
*	s: prints the string.
*	Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case 2 characters)
__Repo:__
*	GitHub repository: printf

6. Handle the following following conversion specifier: p.
*	You don't have to handle the flag characters
*	You don't have to handle field width
*	You don't have to handle precision
*	You don't have to handle the length modifier
__Repo:__
*	GitHub repository: printf

8. Handle the following flag characters for non-custom conversion specifiers:
*	+
*	space
*	#
__REPO:__
*	GitHub repository: printf

9. Handle the following length modifiers for non-custom conversion specifiers.
*	l
*	h
   Conversion specifiers to handle: d, i, u, o, x, X
__Repo:__
*	GitHub repository: printf

10. Handle the field width for non-custom conversion specifiers.
__Repo:__
*	GitHub repository: printf

11. Handle the precision for non-custom conversion specifiers.
__Repo:__
*	GitHub repository: printf

12. Handle the 0 flag character for non-custom conversion specifiers.
__Repo:__
*	GitHub repository: printf

13. Handle the - flag character for non-custom conversion specifiers.
__Repo:__
*	GitHub repository: printf

14. Handle the following custom conversion specifier:
*	r: prints the reversed string
__Repo:__
*	GitHub repository: printf

15. Handle the following custom conversion specifier:
*	R: prints the ret13'ed string
__Repo:__
*	GitHub repository: printf

16. All the above options work well together.
__Repo:__
*	GitHub repository: printf


__AUTHORS:__

* https://github.com/Kenmind
* https://github.com/oluchii
