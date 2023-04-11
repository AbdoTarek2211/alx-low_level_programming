#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars, and initializes
 * @size: size of array
 * @c: array to be passsed
 *
 * Return: always 0.
 */
char *create_array(unsigned int size, char c)
{
char *temp;
temp = malloc(size * sizeof(char));
unsigned int i = size;
if (size == 0 || temp == NULL)
return (NULL);
else
{
for (; i >= 0; i--)
{
temp[i] = c;
}
return (temp);
}
}
