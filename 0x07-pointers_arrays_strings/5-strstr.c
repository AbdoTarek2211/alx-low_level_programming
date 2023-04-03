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
while (*haystack != '\0')
{
char *x;
x = haystack;
while (*needle == *haystack)
{
haystack++;
needle++;
}
if (*needle == '\0')
return (x);
haystack++;
}
return (0);
}
