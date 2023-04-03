#include "main.h"
/**
 * _strspn - Returns a pointer to the first occurrence of a character
 * @s : string to find in
 * @accept : character to be found
 *
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
return (&s[i]);
}
}
return (0);
}
