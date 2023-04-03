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
char *p = haystack;
char *j = needle;
for (; *haystack != '\0'; haystack++)
{
while (*p == *j && *j != '\0')
{
p++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
