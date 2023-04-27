#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
size_t counter = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
