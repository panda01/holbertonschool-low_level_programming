#include "holberton.h"
#include <stdio.h>

/**
 * main - Check my code!
 *
 * Return: Always 0
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";

	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);

	return (0);
}

unsigned int length(char *s)
{
	unsigned int idx = 0;

	while(s[idx] != '\0')
	{
		idx++;
	}
	return idx;
}
