#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);

		putchar(',');

		putchar(' ');
	}

		return (0);
}
