#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum = 0;
unsigned int i;
va_start(list,n);
for (i = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}
