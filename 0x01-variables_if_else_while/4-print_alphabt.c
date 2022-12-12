#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char at;

	for (at = 'a'; at <= 'z'; at++)
	{
		if (at != 'e' && at != 'q')
			putchar(at);
	}

	putchar('\n');

	return (0);
}
