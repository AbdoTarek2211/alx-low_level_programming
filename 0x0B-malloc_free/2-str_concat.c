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
char *str_concat(char *s1, char *s2)
{
int sizes1, sizes2, i;
char *temp;
sizes1 = 0;
sizes2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(sizes1 + s1) != '\0')
sizes1++;
while (*(sizes2 + s2) != '\0')
sizes2++;
sizes2++;
temp = malloc((sizes2 + sizes1) * sizeof(char));
if (temp == NULL)
return (NULL);
for (i = 0; i < sizes1; i++)
temp[i] = s1[i];
for (i = 0; i < sizes2; i++)
temp[i] = s2[i];
return (temp);
}
