#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: character
 * Return: return 1 if c is uppercase ; return 0 if c is minuscule
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
