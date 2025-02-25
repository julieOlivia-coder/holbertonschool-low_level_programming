#include "main.h"
#include <stdio.h>

/**
* more_numbers - function that prints the numbers, de 1 to 14
* followed by a new line
* Return: void
*/

void more_numbers(void)
{
	int num;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			 _putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
