#include "main.h"
/**
 * _strcpy - copies a string into another string
 * @src : string to be copied
 * @dest : string to be placed at
 *
 * Return: 0 or 1
 */
char *cap_string(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
s[x] -= 32;
if (s[x] == '\n' || s[x] == ' ' || s[x] == ',' || s[x] == ';' || s[x] == '.' || s[x] == '!' || s[x] == '?' || s[x] == '(' || s[x] == ')' || s[x] == '{'|| s[x] == '}' || s[x] == '\t' || s[x] == '"')
{
if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
{
s[x + 1] = s[x + 1] - 32;
}
}
}
return (s);
}
