#include "holberton.h"

/**
 * print_char - print character % c
 * @list: char to print.
 *
 * Return: char length for count.
 */

int print_char(va_list list)
{
	char a;

	a = va_arg(list, int);
	_putchar(a);
	return (1);
}

/**
 * print_char_2 - print string % s.
 * @list: string to print.
 *
 * Return: string length for count.
 */

int print_char_2(va_list list)
{
	char *s_aux;

	s_aux = va_arg(list, char*);
	if (!s_aux)
	{
		s_aux = "(null)";
	}
	_puts(s_aux);
	return (_strlen(s_aux));
}

/**
 * print_int - print a number using print_number func
 * @list: string to print.
 *
 * Return: integer.
 */

int print_int(va_list list)
{
	return (print_number(va_arg(list, int)));
}

/**
 * print_to_binar - call binary converter and prints converted int
 * @list: decimal to convert and print in binary.
 *
 * Return: printed number converted.
 */

int print_to_binar(va_list list)
{
	int i = 0, count = 0;
	int binnum[100];
	unsigned int n = va_arg(list, unsigned int);
	unsigned int aux;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		aux = n % 2;
		binnum[i] = aux;
		i++;
		n = n / 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binnum[i] + '0');
		count++;
	}
	return (count);
}

/**
 * print_percent - print % in case that %% is typed into the _printf function
 * @list: % to print.
 *
 * Return: % char length for count.
 */

int print_percent(va_list list __attribute__((unused)))
{
	_putchar('%');
	return (1);
}
