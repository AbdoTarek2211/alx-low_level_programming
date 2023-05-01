#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node
 * @head: pointer to the head list to add to
 * @index: index of the node
 * Return: the number of nodes printed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *position = NULL;
listint_t *temp = *head;
unsigned int x = 0;
if ((*head) == NULL)
return (-1);
if (index == 0)
{
(*head) = head->next;
free(temp);
return (1);
}
for (; x < index - 1; x++)
{
if (temp == NULL || temp->next == NULL)
return (-1);
temp = temp->next;
}
position = temp->next;
temp->next = position->next;
free(position);
return (1);
}
