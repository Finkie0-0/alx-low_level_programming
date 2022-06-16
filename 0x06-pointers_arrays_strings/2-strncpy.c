#include "main.h"
/**
 * _strncpy - A function that copies string.
 * n bytes of src are copied.
 * if length of the src is less than n (< n), additional null bytes are written to dest
 * this ensures that a total of n bytes is written.
 * @dest: pointer to destination string
 * @src: pointer to the source string
 * @n: number of bytes to be used
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[j] =src[j];
for (; j < n; j++)
dest[j] = '\0';
return (dest);
}
