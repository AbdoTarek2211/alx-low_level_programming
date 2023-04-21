#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: seperates strings
 * @n: number of integers
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *temp;
if (separator == NULL)
separator = "";
va_start(list, n);
for (i = 0; i < n; i++)
{
temp = va_arg(list, char*);
if (temp == NULL)
printf("(nil)");
else
printf("%s", va_arg(list,string));
if (n == i + 1)
break;
printf("%s", separator);
}
printf("\n");
va_end(list);
}
