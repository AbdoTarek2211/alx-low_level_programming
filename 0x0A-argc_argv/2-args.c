#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count of program
 * @argv: number of arguments used
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
int x = 0;
while (x < argc)
{
printf("%s\n", *(argv + x));
number++;
(*argv)++;
}
return (0);
}
