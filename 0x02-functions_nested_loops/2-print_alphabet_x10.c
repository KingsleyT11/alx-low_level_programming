#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 */
void print_alphabet_x10(void);
{
	int ten;
	char lc;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
