#include "main.h"
#include <stdio.h>
/**
* _isupper - checks for uppercase character
* @c: is the char to be checked
* Return: 1 if char is uppercase, otherwise 0.
*/
int _isupper(int c)
{
if(c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
