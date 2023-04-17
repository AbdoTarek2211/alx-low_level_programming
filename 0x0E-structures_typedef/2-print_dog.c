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
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %d\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Age: %d\n", d->age);
}
}
