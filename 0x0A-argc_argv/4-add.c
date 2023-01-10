#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

/**
 * main - main funct
 * @argc: param count
 * @argv: param poiter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int q, r, sum = 0;

	for (q = 1; q < argc; q++)
	{
		for (r = 0; argv[q][r] != '\0'; r++)
		{
			if (!isdigit(argv[q][r]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[q]);
	}
	printf("%d\n", sum);

	return (0);
}
