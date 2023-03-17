#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int j = 0;
for (; j <= 9; j++)
{
printf("%d", j);
}
int i = 'A';
for (; i <= 'F'; i++)
{
putchar(tolower(i));
}
putchar('\n');
return (0);
}
