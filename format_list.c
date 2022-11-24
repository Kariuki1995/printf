#include "main.h"

/**
 * print_char - print character
 * @list: argument list
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * print_string - prints a string
 * @list: list of argument list
 * Return: number of characters printed
 */

int print_string(va_list list)
{
	int i;
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
/**
 * print_percent - prints the percent symbol
 * @list: arguments list
 * Return: number of characters printed
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}


