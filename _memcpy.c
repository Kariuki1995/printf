#include "main.h"

/**
 * _memcpy - copies a shortcut string
 * @dest: destination string
 * @src: source string
 * Return: pointer to the destination string
 */

char *_memcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
