#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s : string to be capitalized
 *
 * Return: 0 or 1
 */
char *cap_string(char *s)
{
int x;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
for (x = 0; s[x] != '\0'; x++)
{
if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
s[x] -= 32;
for (j = 0; j <= 12; j++)
{
if (s[x] == a[x])
{
if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
{
s[x + 1] = s[x + 1] - 32;
}
}
}
}
return (s);
}
