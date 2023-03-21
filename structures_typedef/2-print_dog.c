#include <stdio.h>
#include "dog.h"

/**
 * print_dog - funtion Prints a struct dog.
 * @d: The name of the dog..
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->Name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->Name);
if (d->Age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n",d->Age);
if (d->Owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->Owner);
}
