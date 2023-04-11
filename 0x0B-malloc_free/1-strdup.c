#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a new string
 * @str: array to be passed
 *
 * Return: always 0.
 */
char *_strdup(char *str)
{
int strsize, i;
char *temp;
strsize = 0;
if (str == NULL)
return (NULL);
while (*str != '\0')
{
strsize++;
str++;
}
strsize++;
temp = malloc(strsize *sizeof(char));
if (temp == NULL)
return (NULL);
for (i = 0; i < strsize; i++)
{
*(temp + i) = *(str + i);
}
return (temp);
}
