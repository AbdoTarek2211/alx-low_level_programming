#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - returns number of elements
 * @head: pointer to the head list to add to
 * @idx: index of node
 * @n: number to be added
 * Return: the number of nodes printed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nd;
listint_t *temp = *head;
unsigned int x = 0;
nd = malloc(sizeof(listint_t));
if (nd == NULL || head == NULL)
return (NULL);
nd->n = n;
nd->next = NULL;
if (idx == 0)
{
nd->next = (*head);
(*head) = nd;
return (nd);
}
for (; x < idx && temp; x++)
{
if (i + 1 == idx)
{
nd->next = temp->next;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
