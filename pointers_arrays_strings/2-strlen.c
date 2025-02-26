#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: it's a character pointé
 * Return: nbrechar
 */

int _strlen(char *s)
{
	int nbrechar = 0;

	for (; *s != '\0'; s++)

	nbrechar++;

	return (nbrechar);
}
