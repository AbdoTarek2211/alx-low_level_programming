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
int i;
char *temp;
if (nmemb == 0 || size == 0)
return (NULL);
temp = malloc(nmemb * size);
if (temp == NULL)
return (NULL);
for (i = (size * nmemb); i > 0; i--)
temp[i] = 0;
return (temp);
}
