#include "main.h"

/**
 * _strcpy - copies the string poiited to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int ls = 0;

	while (*(src + ls) != '\0')
	{
		*(dest + ls) = *(src + ls);
		ls++;
	}

	*(dest + ls) = '\0';
	return (dest);
}
