#include "main.h"

/**
 * _strspn - return length of string that
 *  matches values consistently
 *  @accept: target matches
 *  @s: string to search
 *  Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int h = 0, d;
	int matches = 0;

	while (s[h] != '\0')/*iterate through string*/
	{
		for (d = 0; accept[d] != '\0'; d++)/*iterate through target*/

		{
			if (s[h] == accept[d]) /*record & break at first match*/

			{
				matches++;
				break;
			}
			if (accept[d + 1] == '\0' && s[h] != accept[d])

			return (matches);/*return if idx doesn't match*/
		}

		h++;

	}

	return (matches); /* return num if all match till end */
}
