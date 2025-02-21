#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign the random each time executed
* betty style doc for function main goes there
* Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
