#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string to be halved
 *
 * Return: 0 or 1
 */
void puts_half(char *str)
{
int s = 0;
int x;
char *z = str;
while (*z != '\0')
{
z++;
s++;
}
if (s % 2 != 0)
x = (s/2) + 1;
else
x = s / 2;
for (; x < s; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
