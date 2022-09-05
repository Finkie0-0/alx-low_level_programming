#include "main.h"

/**
 * _islower - shows if a char is in lowercase
 * @c - The char to check
 * Return: 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
