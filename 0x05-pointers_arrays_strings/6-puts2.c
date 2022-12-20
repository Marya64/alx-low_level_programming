#include <stdio.h>
#include "main.h"

/**
 * puts2 - this function prints a string then a new line to stdout
 * @str: pointer value
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
