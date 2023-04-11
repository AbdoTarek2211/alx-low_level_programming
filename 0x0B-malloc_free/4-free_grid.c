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
void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
free(grid[i]);
free(grid);
}
