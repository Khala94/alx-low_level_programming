#include "dog.h"
/* All my headers goes here */

/**
* init_dog - initializes a structure of type dog
* @d: pointer to structure
* @name: pointer to the name of the dog
* @age: age of the dog
* @owner: pointer to the owner of the dog
* return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
