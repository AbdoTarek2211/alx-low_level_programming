#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
int x = 0;
int y = 0;
for (; x < 8; x++)
{
for (; y < 8; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
}
}
