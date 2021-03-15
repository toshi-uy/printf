#include "holberton.h"

/**
 * print_char - print character % c
 * @list: char to print.
 *
 * Return: char length for count.
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
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
		return (0);
	}
	_puts(s_aux); /*Funcion que imprime strings con putchar*/
	return (strlen(s_aux));
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
	int n = change_to_binary(va_arg(list, int));

	return (print_number(n));
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

