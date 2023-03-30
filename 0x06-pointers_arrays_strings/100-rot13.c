#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s : string to be copied
 *
 * Return: 0 or 1
 */
char *rot13(char *s)
{
int i;
int j;
char *x = "abcdefghijklmnopqrstuvwxyz";
char *y = "nopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 26; j++)
{
if (s[i] == x[j])
s[i] = y[j];
}
}
return (s);
}
