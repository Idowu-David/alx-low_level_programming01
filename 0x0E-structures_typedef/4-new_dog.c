#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function for a new dog.
 * @name: pointer to name of dog.
 * @age: pointer to age of dog.
 * @owner: pointer to owner of dog.
 *
 * Return: returns pointer to new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog;

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
