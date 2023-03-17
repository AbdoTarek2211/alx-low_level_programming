#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i = 0;
for (; i <= 9; i++)
{
printf("%d", i);
}
int i = 'A';
for (; i <= 'F'; i++)
{
putchar(tolower(i));
}
putchar('\n');
return (0);
}
