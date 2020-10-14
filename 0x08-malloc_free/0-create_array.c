#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * create_array - Makes an array of given size and value
 * @size: The size of the array
 * @c: The character to fill the array with
 * Return: The array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array_of_chars = malloc(size * 4);
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (array_of_chars == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= size; index++)
	{
		array_of_chars[index] = c;
	}

	return (array_of_chars);
}
