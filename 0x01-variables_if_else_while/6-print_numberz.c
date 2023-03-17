#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i = 0;
for (; i <= 9; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
