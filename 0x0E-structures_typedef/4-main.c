#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

	char dog_name[] = "Django";

    my_dog = new_dog(dog_name, 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

    return (0);
}