#include "main.h"

/**
 * jack_bauer - function which prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
	int h;
	int q;

	for (h = 0; h <= 23; h++)
	{
		for (q = 0; q <= 59; q++)
		{
			_putchar (h / 10 + '0');
			_putchar (h % 10 + '0');
			_putchar (':');
			_putchar (q / 10 + '0');
			_putchar (q % 10 + '0');
			_putchar ('\n');
		}
	}
}
