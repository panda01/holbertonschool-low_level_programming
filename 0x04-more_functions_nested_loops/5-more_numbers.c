#include "holberton.h"

/**
 * more_numbers - Prints more numbers!!1
 *
 */

void more_numbers(void)
{
	int singleDigit;

	for (singleDigit = 0; singleDigit <= 14; singleDigit++)
	{
		if (singleDigit > 9)
		{
			_putchar(singleDigit / 10 + '0');
		}
		_putchar(singleDigit % 10 + '0');
	}
	_putchar('\n');
}
