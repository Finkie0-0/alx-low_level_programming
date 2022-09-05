#include "main.h"

/**
 * _strcpy - copies the string pointed to by the src
 * @dest: Var that will hold the string
 * @src: Var that holds the string
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
