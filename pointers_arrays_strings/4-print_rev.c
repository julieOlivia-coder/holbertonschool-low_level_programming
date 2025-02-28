#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: pointeur
 * Return: void
 */

void print_rev(char *s)

{
	int len = 0;
	int a;

	for (; s[len] != '\0' ; len++)
	{
		a++;
	}
	for (a = len - 1 ; a >= 0 ; a--)
	_putchar(s[a]);
	_putchar('\n');
}

