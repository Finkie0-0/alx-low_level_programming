#include "main.h"
/**
 * puts2 - prints everyt character in a string
 * @str: A pointer to a integer that will be changed
 * Return: void which means it is correct
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}
_putchar ('\n');
}
