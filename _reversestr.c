#include "main.h"
/**
 *print_r - prints a string in reverse
 *@list:list to increment
 *Return:no. of charcters printed
 */
int print_r(va_list list)
{
	char *s = va_arg(list, char *);
	int i, c;

	if (s == NULL)
		s = ")llun(";
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
		c++;
	}
	return (i);
}

void rev_string(char *s)
{
	int length = _strlen(s);
	int counter = 0;
	char tmp;

	while (counter < length / 2)
	{
		tmp = *(s + counter);
		*(s + counter) = *(s + length - 1 - counter);
		*(s + length - 1 - counter) = tmp;
		counter++;
	}

}
