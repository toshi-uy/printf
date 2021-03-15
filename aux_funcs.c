#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * num_length - counts number of digits of a number
 * @n: string to count digits.
 *
 * Return: digit quantity for count.
 */

int num_lenght(int n)
{
	int counter = 1;

	if (n < 0)
		counter++;
	while (n / 10 != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

int num_lenght_uns(unsigned int n)
{
	int counter = 1;

	while (n / 10 != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

