#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of bytes
 *
 * Return: always 0.
 */
void *malloc_checked(unsigned int b)
{
void *temp;
temp = malloc(b);
if (temp == NULL)
exit(98)
return (temp);
}
