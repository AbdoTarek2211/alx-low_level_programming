#include <stdlib.h>
#include <time.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
 printf("%i is positive\n", n);
else if (n < 0)
 printf("%i is negative\n", n);
else
 printf("%i is zero\n", n);
return (0);
}
