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

/**
 * print_integer - prints an integer
 * @list: arguments list
 * Return: no. of integers printed
 */

int print_integer(va_list list)
{
	int length, n, div;
	unsigned int num;

	n = va_arg(list, int);
	div = 1;
	length = 0;

	if (n < 0)
	{
		length += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;
	while (div != 0)
	{
		length += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (length);
}


	
