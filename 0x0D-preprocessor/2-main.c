#include <stdio.h>

/**
 * main - Program compilation starts from the main
 * Description: program prints the name of the file it was compiled from
 * Return: 0 (success)
 */

int main(void)

{
	printf("%s\n", __FILE__);
	return (0);
}
