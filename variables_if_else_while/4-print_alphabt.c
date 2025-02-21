#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - rints alphabet without: e and q, followed by a new line
* betty style doc for function main goes there
* Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch  == 'e' || ch  == 'q')
		{
			continue;
		}
		putchar(ch);
	}

	putchar ('\n');

	return (0);
}
