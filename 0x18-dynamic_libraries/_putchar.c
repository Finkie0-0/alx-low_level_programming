#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char _putchar to  stdout
 * Return: On Success 1 else -1 and an erron.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
