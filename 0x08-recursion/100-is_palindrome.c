#include "main.h"
/**
  * leng - checks the length of a string
  * @s: string
  * Return: length of string
**/
int leng(char *s)
{
if (*s == '\0')
return (0);
return (1 + leng(s + 1));
}
/**
 * chck - checks if the string is palindrome
 * @i: index
 * @lg: string length
 * @s: string
 * Return: 1 or 0
**/
int chck(int i, int lg, char *s)
{
if (lg > 0)
{
if (s[i] == s[lg])
{
return (chck(i + 1, lg - 1, s));
}
else if (s[i] != s[lg])
{
return (0);
}
else
{
return (1);
}
}
return (1);
}
/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: string
  * Return: return 1 or 0
**/
int is_palindrome(char *s)
{
return (chck(0, leng(s) - 1, s));
}
