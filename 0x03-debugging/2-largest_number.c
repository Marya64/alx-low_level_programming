#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @p: first integer
 * @o: second integer
 * @q: third integer
 * Return: largest number
 */

int largest_number(int p, int o, int q)
{
	int largest;

	if (p >= o && p >= q)
	{
		largest = p;
	}
	else if (o >= p && o >= q)
	{
		largest = o;
	}
	else
	{
		largest = q;
	}
	return (largest);
}
