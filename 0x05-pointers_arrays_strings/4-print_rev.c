#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: A pointer to a integer that will be updated
 * Return: Void which means our answer is correct
 */
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
_putchar (s[i]);
}
_putchar ('\n');
}
