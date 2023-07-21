#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * print_numbers - Prints numbers from 0 to 9 in ascending order
 *
 */

void print_numbers(void);
{
	int number;
	
	for (number = 0; number < 10; number++);
	{
		_putchar(number);
	}

	_putchar('\n');

	return (0);
}
