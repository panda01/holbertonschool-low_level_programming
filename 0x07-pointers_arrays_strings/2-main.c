#include "holberton.h"
#include <stdio.h>

/**
 * main - Check my code!
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
