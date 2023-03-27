#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a , @b : numbers to be swaped
 *
 * Return: 0 or 1
 */
void swap_int(int *a, int *b)
{
int x = *a;
int y = *b;
*a = y;
*b = x;
}
