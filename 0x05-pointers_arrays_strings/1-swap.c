#include "main.h"

/**
 *  swap_int-Swaps the values of two integers
 *  @a: First argument
 *  @b: Second argument
 *
 *  Return: void
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
