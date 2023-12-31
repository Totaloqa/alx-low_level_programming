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
		putchar(+1);
		return (1);
	}
	else if (n < '0')
	{
		putchar('-');
		putchar(-1);
		return (-1);
	}
	else
	{
		putchar('0');
		putchar('1' + (-n % 10));
		return (0);
	}
}
