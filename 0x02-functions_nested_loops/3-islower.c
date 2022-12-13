#include "main.h"

/**
 * _islower - checks for lowercase characters 
 * @c: the character
 * Return: 1 if char is lowercase, 0 if not
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
