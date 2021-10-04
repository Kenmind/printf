#include "main.h"

/**
 * get_func - finds a function pointer to associated with specifier
 * @a: specifier to find the right function
 * Return: function pointer
 */

int (*get_func(const char a))(va_list)
{
	unsigned int k = 0;

	format_t structs_pr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'i', print_integer},
		{'d', print_decimal},
		{'b', print_binary},
		{'u', print_unint},
		{'o', print_octal},
		{'R', print_rot13},
		{'\0', NULL}
		};

	for (; structs_pr[k].tps; k++)
	{
		if (a == structs_pr[k].tps)
			return (structs_pr[k].f);
	}
	return (NULL);
}
