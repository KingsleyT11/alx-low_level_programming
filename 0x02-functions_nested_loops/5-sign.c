#include "main.h"

/**
 * print_sign -print numbers sign
 * @n: number of sign to be printed
 * Return: 1 if number is > zero
 * 0 if number = zero
 * -1 if number is < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
