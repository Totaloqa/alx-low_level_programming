#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * print_numbers - Prints numbers from 0 to 9 in ascending order
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
