#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i, j, k;
for (int i = 0; i < 8; i++)
{
for (int j = i + 1; j < 9; j++)
{
for (int k = j + 1; k < 10; k++)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
if (i == 7 && j == 8 && k == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
