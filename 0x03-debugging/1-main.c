#include <stdio.h>

/**
 * main - Tests the code
 * Return: Always 0
 */

int main(void)
{
	int i;

	printf("infinte loop incoming :( \n");

	i = 0;

	/* while (i < 10) */
	{
		putchar(i);
	}
	
	printf("Infinte loop avoided \n");

	return (0);
}
