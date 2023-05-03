#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - reverse a list
 * @head: pointer to the listint_t head to print
 *
 * Return: the number of nodes printed
 */
size_t free_listint_safe(listint_t **h);
{
size_t len = 0;
int diff;
listint_t *temp;
if (h == NULL || (*h) == NULL)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
