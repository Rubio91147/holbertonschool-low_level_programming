#include <stdio.h>
#include "dog.h"

/**
 * init_dog - funtion
 * description - write a funtion that initialize a variable of type struct dog
 * @d: argument for the function
 * @name: argument for the function
 * @age: arguments for the function
 * @owner: arguments for ther function
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
