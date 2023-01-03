#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
 */

void print_diagonal(int n)
{
	int r = 0;
	int s;

	if (n > 0)
	{
		for (; r < n; r++)
		{
			for (s = 0; s < r; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
