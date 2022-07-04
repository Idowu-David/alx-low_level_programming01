#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of a dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 */
struct dog
{
	char *name;
	int *age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
