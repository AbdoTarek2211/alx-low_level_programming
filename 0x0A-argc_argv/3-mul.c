#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: count of program
 * @argv: number of arguments used
 *
 * Return: 1 if are less of 2 arguments otherwise 0.
 */
int main(int argc, char **argv)
{
int x;
if (argc < 3 || argc > 2)
{
printf("Error\n");
return (1);
}
else
{
x = atoi(*(argv + 1)) * atoi(*(argv + 2));
printf("%i\n", x);
}
return (0);
}
