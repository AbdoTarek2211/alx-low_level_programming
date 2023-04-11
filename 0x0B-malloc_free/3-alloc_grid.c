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
if (width <= 0 || height <= 0)
return (NULL);
temp = (int **) malloc(height *sizeof(int *));
if (temp == NULL)
{
free(temp);
return (NULL);
}
for (i = 0; i < height; i++)
{
temp[i] = (int *) malloc(width * sizeof(int));
if (temp[i] == NULL)
{
for (; i >= 0; i--)
free(temp[i]);
free(temp);
return (NULL);
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
*(*(temp + i) + j) = 0;
return (temp);
}
