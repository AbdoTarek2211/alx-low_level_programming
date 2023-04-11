#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: size of width
 * @height: size of height
 *
 * Return: always 0.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **temp;
if (width == 0 || height == 0 || width < 0 || height < 0)
return (NULL);
temp = malloc((width * height) *sizeof(int *));
if (temp == NULL)
return (NULL);
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
temp[i * height + j] = 0;
}
}
return (temp);
}
