#include <stdlib.h>
#include "dog.h"


/**
 * strlength - Gets the length of a string
 * @str: the string who's length we measure
 * Return: the length of string
 */
int strlength(char *str)
{
	int idx = 0;

	while (*(str + idx) != '\0')
	{
		idx++;
	}
	return (idx + 1);
}
/**
 * strcopy - Copies a string
 * @str: the string to copy
 * Return: pointer to copied string
 */
char *strcopy(char *str)
{
	int idx;
	int strlen = strlength(str);
	char *ret_str = malloc(strlen);

	if (ret_str == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < strlen; idx++)
	{
		ret_str[idx] = str[idx];
	}
	return (ret_str);
}

/**
 * new_dog - Creates and returns a new dog
 * @name: Name string
 * @age: age num
 * @owner: owner name string
 * Return: the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lassie = malloc(sizeof(dog_t));

	if (lassie == NULL)
	{
		return (NULL);
	}

	lassie->name = strcopy(name);
	if (lassie->name == NULL)
	{
		free(lassie);
		return (NULL);
	}
	lassie->age = age;
	lassie->owner = strcopy(owner);
	if (lassie->owner == NULL)
	{
		free(lassie->name);
		free(lassie);
		return (NULL);
	}

	return (lassie);
}
