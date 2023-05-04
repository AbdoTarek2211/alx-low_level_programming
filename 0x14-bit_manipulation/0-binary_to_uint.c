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
if (b == NULL)
return (0);
for (; b[i]; i++)
{
if (b[i] != '0' || b[i] != '1')
return (0);
}
i = 0;
while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i]-'0';
i++;
}
return (val);
}
