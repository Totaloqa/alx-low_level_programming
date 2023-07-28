#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer to check
 *
 * Return: absolute value of n
 */

int _abs(int)
{
	int n;

	if (n >= '0')
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
