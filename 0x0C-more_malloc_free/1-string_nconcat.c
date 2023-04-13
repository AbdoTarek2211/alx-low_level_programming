#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n : size of characters
 * Return: always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i,j;
char *temp;
int x = 0;
int y = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + x) != '\0')
x++;
while (*(s2 + y) != '\0')
y++;
if (n > y)
n = b;
temp = malloc(((x + n) + 1));
if (temp == NULL)
return (NULL);
for(i = 0; s1[i] != '\0'; i++)
temp[i] = s1[i];
for(j = 0; s2[j] != '\0'; j++, i++)
temp[i] = s2[j];
temp[i] = '\0';
return (temp);
}
