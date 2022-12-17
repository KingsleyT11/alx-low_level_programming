#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: input number
 * Return: 1 if number is zero to nine , and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
