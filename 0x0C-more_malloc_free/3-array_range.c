#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - allocates memory using malloc
 * @min: minimum value
 * @max: maximum value
 *
 * Return: always 0.
 */
int *array_range(int min, int max)
{
int *temp;
int k;
int i = min;
int j = max;
if (min > max)
return (NULL);
temp = (int *) malloc((max - min + 1) * sizeof(int));
if (temp == NULL)
return (NULL);
for (k = 0; i <= j; k++, i++)
temp[k] = i;
return (temp);
}
