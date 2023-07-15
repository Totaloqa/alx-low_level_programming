#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

main()
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	putchar(',');

		putchar(' ');

		putchar('\n');

		return (0);
}
