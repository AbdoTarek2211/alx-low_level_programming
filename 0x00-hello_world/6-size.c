#include <stdio.h>
/**
* main - A program that print a line using the printf function
*Return: 0 (Success)
*/
int main(void)
{
char a;
int b;
float c;
long long int d;
long int e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
