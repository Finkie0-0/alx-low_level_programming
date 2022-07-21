#include "main.h"
/**
 * binary_to_uint - convert binary no to unsigned int.
 * @b: char pointer to be printed
 * Return: Converted value, 0 if more char returned on b therefore b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}
