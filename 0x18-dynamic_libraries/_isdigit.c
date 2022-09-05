#include "main.h"

/**
 * _isdigit - checks if input is a number
 * @c: input the number
 * Return: 1 if success else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
