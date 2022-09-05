#include "main.h"

/**
 * _puts - prints string, followed by new line.
 * @str: input string
 * Return: none
 */
void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[counter]);
		counter++;
	}
}
