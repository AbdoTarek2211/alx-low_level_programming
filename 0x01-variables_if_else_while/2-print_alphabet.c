#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i = 'A';
for (; i <= 'Z'; i++)
{
putchar(tolower(i));
}
printf("\n");
return (0);
}
