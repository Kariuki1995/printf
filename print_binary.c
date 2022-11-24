#include "main.h"

/**
 * print_binary - convert base 10 number to binary
 * @list: argument list
 * Return: length of printed binary number
 */

int print_binary(va_list list)
{
	unsigned int n;
	int length, i;
	char *str;
	char *rev_s;

	n = va_arg(list, unsigned int);
	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);

	length = _strlen(n, 2);

	str = malloc(sizeof(char) * length + 1);

	if (str == NULL)
		return (-1);
	i = 0;

	while (n > 0)
	{
		if (n % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		n = n / 2;
		i++;
	}
	str[i] = '\0';

	rev_s = rev_str(str);

	if (rev_s == NULL)
		return (-1);

	write_num(rev_s);
	free(str);
	free(rev_s);
	return (length);
}
