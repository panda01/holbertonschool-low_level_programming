#include <stdlib.h>
#include <stdio.h>

/**
 * main - Starts the program
 *
 * Return: 0 if all goes well!
 */

int main(void)
{
	int numberIdx = '0';

	while (numberIdx <= '9')
	{
		putchar(numberIdx);
		numberIdx++;
	}
	putchar('\n');

	return (0);
}
