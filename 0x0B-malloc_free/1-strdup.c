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
char *_strdup(char *str)
{
int strsize ,i;
char *temp;
strsize = 0;
if (str == NULL)
return (NULL);
while (*str != '\0')
{
strsize++;
str++;
}
temp = malloc((strsize + 1) * sizeof(char));
if (temp == NULL)
return (NULL);
for (i = 0; i <= strsize; i++)
{
temp[i] = str[i];
}
free(str);
return (temp);
}
