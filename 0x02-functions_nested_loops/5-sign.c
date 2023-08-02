#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints signs of a number
 *
 * @n: character to check
 *
 * Return: 1 if n is > 0, 0 if n = 0, -1 if n < 0
 *
 */

int print_sign(int n)
{
	if (n > '0')
	{
		return (1);
		putchar('+');
	}
	else if (n < '0')
	{
		return (-1);
		putchar('-');
	}
	else
	{
		return (0);
		putchar('0');
	}
}
