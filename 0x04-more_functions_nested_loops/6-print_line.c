#include "main.h"

/**
 * print_line - prints line
 * @n: param
 */

void print_line(int n)
{
	int s = 1;

	while (s <=  n)
	{
		_putchar(95);
		s++;
	}
	_putchar('\n');
}
