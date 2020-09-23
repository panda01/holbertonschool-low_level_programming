#include <stdlib.h>
#include <stdio.h>

/**
 * main - Starts the program
 *
 * Return: 0 if all goes well!
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
		}
		if (i < '9')
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
