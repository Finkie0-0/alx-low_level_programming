#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: Char to print
 * Return: 1 when successful or error when appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
