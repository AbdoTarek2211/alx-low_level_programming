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
char *temp;
unsigned int i;
if (h->str == NULL)
printf("[0] (nil)");
temp = h->str;
for (i = 0; i < h->len; i++)
{
printf("%s", temp);
temp = h->next;
}
}
