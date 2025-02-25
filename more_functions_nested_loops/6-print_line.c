#include "main.h"
#include <stdio.h>

/**
* print_line - function that draws a straight line in the terminal
* @n: it's a number
* Return: void
*/

void print_line(int n)

{	int line;
	if (n >= 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
