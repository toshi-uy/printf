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
 * rot13 - print string everything that is not %
 * @s: start of string.
 * Return: string length for count.
 */
void rot13(char *s)
{
	char m[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (s[i] == m[j])
			{
				_putchar(n[j]);
				break;
			}
		}
	}
}

/**
 * print_rot13 - print string everything that is not %
 * @list: start of string.
 * Return: string length for count.
 */

int print_rot13(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (!s)
		s = "(null)";
	rot13(s);
	return (_strlen(s));
}

/**
 * print_adress - print string everything that is not %
 * @list: start of string.
 * Return: string length for count.
 */
int print_adress(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (!s)
		return (0);
	for (; s != '\0'; s++)
		_putchar(*s);
	return (_strlen(s));
}
