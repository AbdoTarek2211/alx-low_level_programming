#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack : string to find in
 * @needle : character to be found
 *
 * Return: a string
 */
char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *x = haystack;
char *y = needle;
while (*x == *y && *y != '\0')
{
x++;
y++;
}
if (*y == '\0')
return (haystack);
}
return (0);
}
