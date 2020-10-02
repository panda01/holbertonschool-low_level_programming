#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header go here */

/**
 * main - Print a random number, and tell
 * if it's negative, positive, or 0.
 *
 * Return: Always returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	/* your code goes here */
	if (n < 0)
	{
		printf("%d :is negative\n", n);
	}
	return (0);
}
