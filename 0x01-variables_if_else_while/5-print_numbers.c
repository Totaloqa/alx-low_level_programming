#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		printf("%d \n", number);
	}

	return (0);
}
