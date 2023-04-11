#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional array
 * @grid: array to be freed
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
