#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers 0 to 14, 10 times
 */

void more_numbers(void)
{
	int times;
	int number;

	for (times = 0; times < 10; times++)
	{
		for (number = 0; number <= 14; number++)
		{
			putchar(number);
		}

		putchar('\n');
	}
}
