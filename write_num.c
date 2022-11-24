#include "main.h"

/**
 * write_num - write binary number of a string
 * @s: the binary represented as a string
 */

void write_num(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
