#include <stdlib.h>
#include <stdio.h>

/**
 * main - Starts the program
 *
 * Return: 0 if all goes well!
 */

int main(void)
{
	int tensPlace;
	int onesPlace;

	for (tensPlace = '0'; tensPlace <= '9'; tensPlace++)
	{
		for (onesPlace = '0'; onesPlace <= '9'; onesPlace++)
		{
			/* place the 10's digit */
			putchar(tensPlace);
			/* place the 1's digit */
			putchar(onesPlace);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
