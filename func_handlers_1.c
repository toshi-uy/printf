#include "holberton.h"

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
 * print_number_uns - prints unsigned numbers
 * @n: string to print.
 *
 * Return: number length
 */
int print_number_uns(unsigned int n)
{
	unsigned int num;

	num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar('0' + (num % 10));

	return (num_lenght_uns(n));
}
