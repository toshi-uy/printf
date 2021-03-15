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
 * _strlen - entry point
 * @s: string to find length
 * Return: length
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	return (len);
}
