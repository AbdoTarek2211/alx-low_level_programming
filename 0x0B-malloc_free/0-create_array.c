#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes
 * @size: size of array
 * @c: array to be passsed
 *
 * Return: always 0.
 */
char *create_array(unsigned int size, char c)
{
int i;
char *temp;
temp = malloc(size * sizeof(char));
if (size == 0 || temp == NULL)
return (NULL);
else
{
for (i = size; i >= 0; i--)
{
temp[i] = c;
}
return (temp);
}
}
