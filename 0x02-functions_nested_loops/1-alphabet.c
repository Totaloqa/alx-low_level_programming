#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	int a;
		for (a < 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
	putchar('\n');
	return (0);
}
