#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements in list
 * @h : the list we working on
 *
 * Returns : 0 or 1
 */
size_t print_list(const list_t *h)
{
unsigned int counter = 0;
if (h == NULL)
return (0);
while (h)
{
if (h->str == NULL)
printf ("[%u] (nil)\n", h->len);
else
printf("[%u] %s\n", h->len, h->str);
counter++;
h = h->next;
}
return (count);
}
