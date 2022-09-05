#include "main.h"

/**
 * _strlen - shows length of a string
 * @s: input string.
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}
