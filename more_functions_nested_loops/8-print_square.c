#include "main.h"
#include <stdio.h>

/**
* print_square - function that prints a square
* followed by a new line
* @size: it's a number
* Return: void
*/

void print_square(int size)
{
	int square, num;

	if (size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar('#');
			}
			if (num == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
