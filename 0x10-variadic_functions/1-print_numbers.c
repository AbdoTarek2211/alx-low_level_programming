#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: seperates strings
 * @n: number of integers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
if (separator == NULL)
separator = "";
va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (n == i + 1)
break;
printf("%s", separator);
}
printf("\n");
va_end(list);
}
