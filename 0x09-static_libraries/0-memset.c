#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * fills the first n bytes of the memory area pointed
 * to by s with the constant b.
 * @n: bytes of the memory area to be filled
 * @s: pointer to memory area
 **@b: constant to fill memory with
 * Return: the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
