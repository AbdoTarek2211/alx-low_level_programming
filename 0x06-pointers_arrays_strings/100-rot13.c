#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s : string to be copied
 *
 * Return: 0 or 1
 */
char *rot13(char *s)
{
int i;
int j;
char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *y = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == x[j])
s[i] = y[j];
}
}
return (s);
}