#include "main.h"

/**
 * reverse_array - A function which reverses an array
 * @n: Pointer of elements in an array
 * @a: A pointer to an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
