#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long d;
	long long e;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(1));
	printf("Size of a long int: %lu byte(s)\n", sizeof(5));
	printf("Size of a long: %lu byte(s)\n", sizeof(2));
	printf("Size of a long long: %lu byte(s)\n", sizeof(3));
	printf("Size of a float: %lu byte(s)\n", sizeof(4));

	return (0);
}
