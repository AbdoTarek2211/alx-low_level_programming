#include "main.h"
/**
 * puts2 - prints a string
 * @str : string to be printed
 *
 * Return: 0 or 1
 */
void puts2(char *str)
{
int s = 0;
int x;
char *z = str;
while (*z != '\0')
{
z++;
s++;
}
for (x = 0; x <= s - 1; x++)
{
if (x % 2 == 0)
{
_putchar(*str);
}
str++;
}
_putchar('\n');
}
