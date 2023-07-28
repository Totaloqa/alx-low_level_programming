#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks to see if c is a letter
 *
 * @c: letter to be checked
 *
 * Return: 1 if c is a letter, otherwise 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
