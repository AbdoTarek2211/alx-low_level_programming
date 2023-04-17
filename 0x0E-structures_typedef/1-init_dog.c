#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes the init_dog
 * @d: dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 * Return: 0 or 1
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
return;
}
