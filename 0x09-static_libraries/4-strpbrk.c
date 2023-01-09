#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @accept: target matches
 * @s: string to search
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int v = 0, r;

	while (s[v] != '\0')
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[v] == accept[r])
			{
				s = &s[v];
				return (s);
			}
		}
	v++;
	}

	return (NULL);
}
