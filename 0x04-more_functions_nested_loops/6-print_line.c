#include "main.h"

/**
 * print_line - print straight line n times
 *
 * @n: times straight line is printed
 * Return: no return
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
