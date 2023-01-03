#include "main.h"

/**
 * print_most_numbers - prints number
 */

void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		if (k != 50 && k != 52)
		{
			_putchar(k);
		}
	}
	_putchar('\n');
}
