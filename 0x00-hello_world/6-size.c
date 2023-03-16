#include <stdio.h>
/**
* main - A program that print a line using the printf function
*Return: 0 (Success)
*/
int main(void)
{
char a;
int b;
long int e;
long long int d;
float c;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
return (0);
}
