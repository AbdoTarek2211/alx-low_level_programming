#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i = 'A';
int j = 'a';
for (; i <= 'Z'; i++)
{
putchar(tolower(i));
}
for (; j <= 'z'; j++)
{
putchar(toupper(j));
}
printf("\n");
return (0);
}
