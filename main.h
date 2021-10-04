#ifndef PRINTF
#define PRINTF

#define BIT_SIZE 8
#define true 1
#define false 0
typedef unsigned int bool;
/*
 *   a local buffer which will be used
 *   to store data until a syscall is made to write it
 *   in the std out
 */
#define BUFFER_SIZE 1024

/* let's import some libraries here */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* Let's define some types here */

/**
 * struct format - Structure to print different type
 * @tps: type to print
 * @f: function to print
 */

typedef struct format
{
const char tps;
int (*f)(va_list);
} format_t;

/* function prototypes goes here */

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list parameters);
int print_s(va_list parameters);
int print_percent(__attribute__((unused))va_list parameters);
int print_i(va_list parameters);
int print_d(va_list parameters);
int (*get_func(const char a))(va_list);
int print_integer(va_list parameters);
int print_decimal(va_list parameters);
int print_binary(va_list parameters);
int binary_recursive(unsigned int num, int len);
int print_unint(va_list parameters);
int print_octal(va_list args);
int rot_13(va_list parameters);

#endif /* PRINTF */
