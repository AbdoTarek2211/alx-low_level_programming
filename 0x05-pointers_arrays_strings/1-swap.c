#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a : numbers to be swaped
 * @b : number to be swapped
 * Return: 0 or 1
 */
void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;
*a = y;
*b = x;
}
