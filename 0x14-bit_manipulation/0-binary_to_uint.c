#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: pointer to string
 *
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;
if (!b)
return (0);
for (; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
val = 2 * val + (b[i] - '0');
}
return (val);
}
