#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (successful)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
