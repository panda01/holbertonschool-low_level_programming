#include <stdlib.h>
#include <stdio.h>

/**
 * main - Starts the program
 *
 * Return: 0 if all goes well!
 */

int main(void)
{
	int hexDecIdx = '0';

	while (hexDecIdx <= '9')
	{
		putchar(hexDecIdx);
		hexDecIdx++;
	}
	for (hexDecIdx = 'a'; hexDecIdx <= 'f'; hexDecIdx++)
	{
		putchar(hexDecIdx);
	}
	putchar('\n');

	return (0);
}
