#include "holberton.h"

/**
 * print_chessboard - Prints a Chessboard
 * @a: a 2D array board
 */
void print_chessboard(char (*a)[8])
{
	int idx;
	int jdx;

	for (idx = 0; idx < 8; idx++)
	{
		for (jdx = 0; jdx < 8; jdx++)
		{
			_putchar(a[idx][jdx]);
		}
		_putchar('\n');
	}
}
