#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (successful)
 */

int main(void)
{
	int number;
	char letter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
