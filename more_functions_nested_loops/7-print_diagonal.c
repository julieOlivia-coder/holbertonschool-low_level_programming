#include "main.h"
#include <stdio.h>

/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: it's a number
* Return: void
*/

void print_diagonal(int n)

{	int diag;
	int space;

	if (n >= 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
				_putchar(' ');
			_putchar('\\');
			if (diag == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
