#include "dog.h"
#include <stdio.h>

/*
 * int dog - Entry point
 * @d: passing structure at the function
 * @name: store a string for main
 * @age: stores a number for main
 * @owner: stores a string for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
