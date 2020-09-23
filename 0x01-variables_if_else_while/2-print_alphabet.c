#include <stdlib.h>
#include <stdio.h>

/**
 * main - Starts the program
 *
 * Return: 0 if all goes well!
 */

int main(void)
{
	char letterIdx = 'a';

	while (letterIdx <= 'z')
	{
		putchar(letterIdx);
		letterIdx++;
	}
	putchar('\n');

	return (0);
}
