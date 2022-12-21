#include "main.h"

/**
 * _strcmp - A function which compares two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Value greater than 0 if one string is greater then the other
 * Value less than 0 if one string is less than the other
 * 0 if both strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);
}
