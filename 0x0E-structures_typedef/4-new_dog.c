#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int len1, len2;

	len1  = strlen(name);
	len2   = strlen(owner);
	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * len1 + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->owner = malloc(sizeof(char) * len2 + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
