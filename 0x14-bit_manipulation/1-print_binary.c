#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int temp = n;
int x = 0;
if (n == 0)
{
printf("0");
return;
}
while ((temp >>= 1) > 0)
{
x++;
}
for (; x >= 0; x--)
{
if ((n >> x) & 1)
printf("1");
else
printf("0");
}
}
