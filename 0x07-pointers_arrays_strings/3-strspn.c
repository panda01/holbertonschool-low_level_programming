#include "holberton.h"


/**
 * _strspn - tell me sometthing good
 * @s: haystack
 * @accept: needles
 *
 * Return: number of needles
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_length = length(s);
	unsigned int accept_length = length(accept);
	unsigned int idx = 0;
	unsigned int j;
	unsigned int letter_was_found;

	while (idx < s_length)
	{
		letter_was_found = 0;
		for (j = 0; j < accept_length; j++)
		{
			if (s[idx] == accept[j])
			{
				letter_was_found = 1;
			}
		}
		if (!letter_was_found)
		{
			return (idx);
		}
		++idx;
	}

	return (idx);
}

/**
 * length - Give us the length of a string
 * @s: the string to get the length from
 *
 * Return: length of string
 */
unsigned int length(char *s)
{
	unsigned int idx = 0;

	while (s[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}
