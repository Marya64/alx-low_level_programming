#include <stdio.h>
#include "main.h"

/**
 * _strncat - Function which concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to concatenate
 * Return: pointer to designated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, b;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++, length++)
	{
		dest[length] = src[b];
	}

	dest[length] = '\0';
	return (dest);
}
