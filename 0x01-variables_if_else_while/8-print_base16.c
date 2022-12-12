#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char at;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (at = 'a'; at <= 'f'; at++)
		putchar(at);

	putchar('\n');

	return (0);
}
