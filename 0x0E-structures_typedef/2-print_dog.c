#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - initializes the struct.
 * @d: the struct.
 * Return: 0 or 1
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
d->name = (nil);
if (d->owner == NULL)
d->owner = (nil);
printf("Name: %s\n", d->name);
printf("Age: %d\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
