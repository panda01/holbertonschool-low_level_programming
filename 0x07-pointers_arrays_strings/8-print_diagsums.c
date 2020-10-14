#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonals in a 2D array
 * @a: The 2D array
 * @size: the length of the array
 */
void print_diagsums(int *a, int size)
{
	int idx;
	int sum = 0;
	int *firstDimension;

	for (idx = 0; idx < size; idx++)
	{
		firstDimension = *a[idx];
		
		sum = sum + *firstDimension;
		/* this is the same thing as above!!! */
		/* sum += a[idx][idx]; */
	}
	printf(sum);
}
