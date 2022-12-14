#include <stdio.h>

/**
 * main - prints natural numbers < 1024 and are multiples of 3 & 5
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
	printf("%d\n", b);
	return (0);
}
