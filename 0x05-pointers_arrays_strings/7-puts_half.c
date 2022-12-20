#include "main.h"

/**
 * puts_half - prints half a string
 * @str: input
 */
void puts_half(char *str)
{
	int ls = 0;

	while (*str != '\0')
	{
		ls++;
		str++;
	}

	str -= (ls / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n')
}
