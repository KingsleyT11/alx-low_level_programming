#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */

int main(void)
{
	char SL;

	for (SL = 'a'; SL <= 'z'; SL++)
	{
		putchar(SL);
	}
	putchar('\n');
	return (0);
}
