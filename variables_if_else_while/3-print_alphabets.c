#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - rints alphabet in lowercase, followed by a new line
* betty style doc for function main goes there
* Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);

	putchar ('\n');

	return (0);
}
