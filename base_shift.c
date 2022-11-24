#include "main.h"
/**
 * print_octal - prints number in octal base
 * @list: arguments list
 *
 * Return: no. of symbols printed
 */
int print_octal(va_list list)
{
	unsigned int number;
	int length;
	char *octal_eqv;
	char *rev_s;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	length = _strlen(number, 8);
	octal_eqv = malloc(sizeof(char) * length + 1);
	if (octal_eqv == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		octal_eqv[length] = (number % 8) + 48;
		number = number / 8;
	}
	octal_eqv[length] = '\0';
	rev_s = rev_str(octal_eqv);
	if (rev_s == NULL)
		return (-1);
	write_num(rev_s);
	free(octal_eqv);
	free(rev_s);
	return (length);
}
/**
 * print_hex - prints hex equivalent of decimal number
 * @list: arguments list
 *
 * Return: no. of characters printed
 */
int print_hex(va_list list)
{
	unsigned int number;
	int length;
	int rem_num;
	char *hex_eqv;
	char *rev_hex;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	length = _strlen(number, 16);
	hex_eqv = malloc(sizeof(char) * length + 1);
	if (hex_eqv == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		rem_num = number % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_eqv[length] = rem_num;
		}
		else
			hex_eqv[length] = rem_num + 48;
		number = number / 16;
	}
	hex_eqv[length] = '\0';
	rev_hex = rev_str(hex_eqv);
	if (rev_hex == NULL)
		return (-1);
	write_num(rev_hex);
	free(hex_eqv);
	free(rev_hex);
	return (length);
}
/**
 * print_HEX - prints number in hex uppercase
 * @list: arguments list
 *
 * Return: no of chars printed
 */
int print_HEX(va_list list)
{
	unsigned int number;
	int length;
	int rem_num;
	char *hex_eqv;
	char *rev_hex;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	length = _strlen(number, 16);
	hex_eqv = malloc(sizeof(char) * length + 1);
	if (hex_eqv == NULL)
		return (-1);
	for (length = 0; number > 0; length++)
	{
		rem_num = number % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_eqv[length] = rem_num;
		}
		else
			hex_eqv[length] = rem_num + 48;
		number = number / 16;
	}
	hex_eqv[length] = '\0';
	rev_hex = rev_str(hex_eqv);
	if (rev_hex == NULL)
		return (-1);
	write_num(rev_hex);
	free(hex_eqv);
	free(rev_hex);
	return (length);
}
/**
 * hex_check - checks for appropriate hex function
 * @number: number to be converted
 * @x: points to a hex function
 * Return: ASCII value for a letter
 */
int hex_check(int number, char x)
{
	char *hex = "abcdef";
	char *HEX = "ABCDEF";

	number = number - 10;
	if (x == 'x')
		return (hex[number]);
	else
		return (HEX[number]);
	return (0);
}
