#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char letter;
		for (letter < 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
	putchar('\n');
	return (0);
}
