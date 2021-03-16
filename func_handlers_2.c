#include "holberton.h"

/**
 * _print_rev_recursion - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * print_str_rev - print string everything that is not %
 * @list: start of string.
 * Return: string length for count.
 */

int print_str_rev(va_list list)
{
	char *aux;

	aux = va_arg(list, char*);
	if (!aux)
		return (0);
	_print_rev_recursion(aux);
	return (_strlen(aux));
}

/**
 * print_rot13 - print string everything that is not %
 * @s: start of string.
 * Return: string length for count.
 */
int print_rot13(va_list list)
{
	char m[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;
	char *s;

        s = va_arg(list, char*);
	if (!s)
		s = "(null)";
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (s[i] == m[j])
			{
				_putchar(n[j]);
				j = 53;
			}
		}
		if (!m[j])
			_putchar(s[i]);
	}
	return (_strlen(s));
}
