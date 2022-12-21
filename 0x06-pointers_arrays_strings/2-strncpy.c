#include "main.h"

/**
 * _strncpy - This function copies a string
 * @src: Pointer to a character which will be changed
 * @dest: Pointer to a character which will be changed
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	q = 0;

	while (q < n && src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}

	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}

	return (dest);
}
