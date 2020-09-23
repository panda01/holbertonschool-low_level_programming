#include <stdio.h>

/**
 * print_to_98 - Print numbers to 98, if above go lower
 * @n: the starting number
 *
 * Return: Void, nothing
 */


void print_to_98(int n)
{
	printf("%d", n);
	while (n != 98)
	{
		printf(",");
		printf(" ");

		if (n > 98)
		{
			/* decrement, or take away 1 from n */
			n = n - 1;
		}
		if (n < 98)
		{
			n++;
		}
		printf("%d", n);
	}

	printf("\n");
}
