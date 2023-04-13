#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory using malloc for array
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, j;
char *temp;
if (nmemb == 0 || size == 0)
return (NULL);
j = (nmemb * size);
temp = malloc(j);
if (temp == NULL)
return (NULL);
for (i = 0; i < j; i++)
temp[i] = 0;
return (temp);
}
