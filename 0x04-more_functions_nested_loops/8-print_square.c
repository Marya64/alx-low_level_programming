#include "main.h"

/**
 * print_square - prints square
 * @size: param
 */

void print_square(int size)
{
	int r = 0, s;

	if (size > 0)
	{
		for (; r < size; r++)
		{
			for (s = 0; s < size; s++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
