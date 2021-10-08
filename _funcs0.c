#include "main.h"

/**
 * ctox - print charachter as hexadecimal
 * @c: charachter to print
 *
 * Return: hex of char
 */
char *ctox(char c)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 2);
	buffer[1] = c % 16;
	c /= 16;
	c %= 16;
	if (c > 9)
		buffer[0] = (c % 10) + 'A';
	else
		buffer[0] = c + '0';
	if (buffer[1] > 9)
		buffer[1] = (buffer[1] % 10) + 'A';
	else
		buffer[1] = buffer[1] + '0';
	return (buffer);
}

/**
 * print_big_s - print a string with non printable characters as hex
 * @modif: struct containing modifier fields
 * @ap: va_list pointer containig string to print
 *
 * Return: string lenght
 */
char *print_big_s(modifier_t *modif, va_list ap)
{
	char *str, *res_str, *aux;
	unsigned int j = 0, i, c;

	if (!ap || !modif || modif->specifier != 'S')
		return (NULL);

	str = va_arg(ap, char *);
	res_str = malloc(sizeof(char));
	for (i = 0; str[i]; i++)
	{
		c = str[i];
		if ((c > 0 && c < 32) || c >= 127)
		{
			res_str = re_alloc_mem(res_str, j + 1, j + 5);
			res_str[j++] = 92;
			res_str[j++] = 'x';
			aux = ctox(c);
			res_str[j++] = aux[0];
			res_str[j++] = aux[1];
			free(aux);
		}
		else
		{
			res_str = re_alloc_mem(res_str, j + 1, j + 2);
			res_str[j++] = str[i];
		}
	}
	res_str[j] = '\0';
	return (res_str);
}

/**
 * print_rev - print a string in reverse
 * @ap:handle %r
 * @modif :struct modifier containig modifier fields
 * Return: lenght
 */

char *print_rev(modifier_t *modif, va_list ap)
{
	int i;
	int length;
	char *str, *ret;

	if (!ap || !modif)
		return (0);
	str = va_arg(ap, char *);
	length = strlen(str);
	ret = malloc(length + 1);
	if (!ret)
		return (NULL);

	for (i = 0; i < length; i++)
		ret[i] = str[length - i - 1];
	ret[i] = '\0';

	return (ret);
}
