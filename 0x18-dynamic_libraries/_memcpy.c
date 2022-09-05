#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: array of type character.
 * @src:  array of type character.
 * @n: unsigned integer.
 * Return: the value of dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
