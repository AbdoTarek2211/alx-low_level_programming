#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array to be passed
 * @size: size of array
 * @action: the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL)
return;
if (action == NULL)
return;
for (i = size - 1; i >= 0; i--)
action(array[i]);
}
