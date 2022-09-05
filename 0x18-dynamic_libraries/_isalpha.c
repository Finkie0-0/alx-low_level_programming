#include "main.h"

/**
 * _isaplha - checks f input is a letter or not
 * @c: The char in ASCII code
 * Return: 1 if letter else 0.
 */
int _isaplha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
