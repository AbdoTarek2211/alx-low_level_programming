#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all elements in list
 * @h : the list we working on
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
size_t counter = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
counter++;
}
return (counter);
}
