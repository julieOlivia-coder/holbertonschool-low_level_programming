#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code.
 * @c: character
 * Return: return 1 if c is digit ; return 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
