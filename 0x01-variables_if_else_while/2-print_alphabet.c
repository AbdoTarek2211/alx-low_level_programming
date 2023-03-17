#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
for (int i = 'A';i <= 'Z';i++)
{
putchar(tolower(i));
printf("\n");
}
return (0);
}
