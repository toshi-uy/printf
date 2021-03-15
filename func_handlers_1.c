#include "holberton.h"

/**
 * print_str - print string everything that is not %
 * @pos1: start of string.
 * @pos2: end of string.
 * @format: section of format to print, limited by pos1 and pos2.
 * Return: string length for count.
 */

void print_str(int pos1, int pos2, const char *format)
{
	while (pos1 <= pos2)
	{
		_putchar(format[pos1]);
		pos1++;
	}
}

/**
 * _puts - entry point
 * @str: string to print
 * Return: nothing
 *
 */

void _puts(char *str)
{
	for (; *str != 0; str++)
		_putchar(*str);
}

/**
 * print_number - print integer
 * @n: any number n to print.
 *
 * Return: quantity of digits for count.
 */

int print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar('0' + (num % 10));

	return (num_lenght(n));
}

/**
 * change_to_binary - change decimal number to binary
 * @n: string to print.
 *
 * Return: binary number
 */
int change_to_binary(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return ((n % 2) + 10 * change_to_binary(n / 2));
}

int print_number_uns(unsigned int n)
{
	unsigned int num;

	num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar('0' + (num % 10));

	return (num_lenght_uns(n));
}
