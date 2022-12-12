#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char at;

	for (at = 'z'; at >= 'a'; at--)
		putchar(at);

	putchar('\n');

	return (0);
}
