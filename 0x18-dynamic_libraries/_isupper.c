#include "main.h"

/**
 * _isupper - checks if input is a uppercase char.
 * @c: input char
 * Return: 1 if uppercase char else 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
