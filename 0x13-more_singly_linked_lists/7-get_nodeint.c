#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the head list
 * @index: index of the node
 * Return: the number of nodes printed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int x = 0;
for (;x < index && temp; x++)
{
temp = temp->next;
}
if (temp == NULL)
return (NULL);
return (temp);
}
