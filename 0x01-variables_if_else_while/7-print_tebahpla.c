#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i = 'Z';
for (; i >= 'A'; i--)
{
putchar(tolower(i));
}
putchar('\n');
return (0);
}
