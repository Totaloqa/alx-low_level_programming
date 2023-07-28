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
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
