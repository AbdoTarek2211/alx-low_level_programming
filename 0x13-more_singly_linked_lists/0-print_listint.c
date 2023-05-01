#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
size_t counter = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
