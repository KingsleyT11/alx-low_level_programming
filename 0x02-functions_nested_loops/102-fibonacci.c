#include <stdio.h>

/**
 * main - prints the addition of Fibonacci numbers
 *
 * Return: Always
 */
int main(void)
{
	int a;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n")
	return (0);
}
