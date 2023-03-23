#include <stdlib.h>
#include "dog.h"
/* All my headers goes here */

/**
 * new_dog - Create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * return: pointer too the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == ((void *)0))
	{
		return (((void *)0));
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
