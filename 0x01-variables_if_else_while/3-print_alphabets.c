#include <stdio.h>

/**
 * main - print alphabets in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char at;

	for (at = 'a'; at <= 'z'; at++)
		putchar(at);

	for (at = 'A'; at <= 'Z'; at++)
		putchar(at);

	putchar('\n');

	return (0);
}
