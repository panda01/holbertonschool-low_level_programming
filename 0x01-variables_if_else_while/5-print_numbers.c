#include <stdlib.h>
#include <stdio.h>

/**
 * main - Starts the program
 *
 * Return: 0 if all goes well!
 */

int main(void)
{
	char numberIdx = '0';

	while (numberIdx <= '9')
	{
		putchar(numberIdx);
		/* iterate over the list */
		numberIdx++;
	}
	putchar('\n');

	return (0);
}
