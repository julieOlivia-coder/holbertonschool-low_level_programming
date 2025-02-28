#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: pointeur
 * Return: void
 */
void _puts(char *str)
{
		for (; *str != '\0'; str++)
		{
			_putchar(*str);
		}
		_putchar('\n');

}

