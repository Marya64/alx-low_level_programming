#include "main.h"
#define NULL 0

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @needle: target substring to search for
 * @haystack: string to search
 * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, z;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[x] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */

		if (haystack[x] == needle[0])
		{
			z = x, y = 0;

			while (needle[y] != '\0')
			{
				if (haystack[z] == needle[y])

				z++, y++;

				else
				break;
			} /* if matched throughout, return haystack */

			if (needle[y] == '\0')
			{
				return (haystack + x);
			}
		}

		x++;
	}

	return (NULL); /* No match */
}
