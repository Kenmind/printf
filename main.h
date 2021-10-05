#ifndef PRINTF
#define PRINTF

/* import some libraries */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct convert - defines a struct for sumbols and functions
 *
 * @sym: The operator
 * @f: the function associated to symbol
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_t;

/*Main functions*/
int parser(const char *format, convert_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(__attribute__((unused))va_list);
int print_integer(va_list list);
int print_decimal(va_list list);
int rot_13(va_list list);
int print_octal(va_list list);
int print_unint(va_list list);
int print_binary(va_list list);
int binary_recursive(unsigned int num, int len);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list list);
int _hex_u(va_list list);
int str(va_list list);


#endif /* PRINTF */
