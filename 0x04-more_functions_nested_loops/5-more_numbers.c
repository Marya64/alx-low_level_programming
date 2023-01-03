#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int s, x;

	s = 0;

	while (s < 10)
	{
		for (s = 0; s < 15; s++)
		{
			if (s >= 10)
			{
				_putchar((s / 10) + 48);
			}
			_putchar((s % 10) + 48);
		}

		_putchar('\n');

	x++;
	}
}
