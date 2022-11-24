#include "main.h"
/**
 * unsigned_integer - prints unsigned int numbers
 * @list: arguments list
 *
 * Return: no of unsigned integers
 */
int unsigned_integer(va_list list)
{
	unsigned int number;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (print_unsigned_number(number));
	if (number < 1)
		return (-1);
	return (print_unsigned_number(number));
}
/**
 * print_unsigned_number - prints an unsigned number
 * @n: unsigned int to print
 *
 * Return: no. of numbers printed
 */
int print_unsigned_number(unsigned int n)
{
	int div;
	int length;
	unsigned int num;

	div = 1;
	length = 0;
	num = n;
	while ((num / div) > 9)
		div *= 10;
	while (div != 0)
	{
		length += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (length);
}
