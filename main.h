#ifndef MAIN_H
#define MAIN_H

#define BUFSIZE MAXLENGTH

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


#endif /* MAIN_H */
