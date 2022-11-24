#include "main.h"

/**
 * rev_str - reverses a string
 * @str: the string
 * Return: reversed string
 */

char *rev_str(char *str)
{
	int length, i;
	char x;
	char *s2;

	length = 0;

	while (str[length] != '\0')
		length++;

	s2 = malloc(sizeof(char) * length + 1);

	if (s2 == NULL)
		return (NULL);

	_memcpy(s2, str);

	for (i = 0; i < length; i++, length--)
	{
		x = s2[length - 1];
		s2[length - 1] = s2[i];
		s2[i] = x;
	}
	return (s2);
}
