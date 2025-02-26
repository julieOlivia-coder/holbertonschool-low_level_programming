#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer point√
 * @b: integer point√
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temporaire = 0;

	temporaire = *b;
	*b = *a;
	*a = temporaire;
}
