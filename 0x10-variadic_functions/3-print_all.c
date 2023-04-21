#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * op_c - print character
 * @form: va_list
 *
 * Return: Nothing.
 */
void op_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * op_i - Print Integer
 * @form: va_list
 *
 * Return: Nothing.
 */
void op_i(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * op_f - print float numbers
 * @form: va_list
 *
 * Return: Nothing.
 */
void op_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * op_s -print string
 * @form: name va_list
 *
 * Return: Nothing.
 */
void op_s(va_list form)
{
	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints everything
 * @format: type of data
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list all;
unsigned int x, y;
char *separator = "";
f op_s[] = {
{"c", op_c},
{"i", op_i},
{"f", op_f},
{"s", op_s},
};
va_start(all, format);
x = 0;
while (format && format[x])
{
y = 0;
while (y < 4)
{
if (op_s[y].op[0] == format[x])
{
printf("%s", separator);
separator = ", ";
ops[y].f(all);
break;
}
y++;
}
x++;
}
printf("\n");
va_end(all);
}
