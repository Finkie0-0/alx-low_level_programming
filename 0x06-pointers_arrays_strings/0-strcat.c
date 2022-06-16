#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest - a pointer to a char that will be concatenated
 * @src - a pointer to a char that will be updated
 * Return: Concatenated strings dest and src
 */
char *_strcat(char *dest, char *src);
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j =0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}

