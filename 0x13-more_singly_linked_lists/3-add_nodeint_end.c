#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 * @head: pointer to the head list
 * @n: number to be added
 * Return: the number of nodes printed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp;
listint_t *re = *head;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
free(temp);
return (temp);
}
temp->next = NULL;
temp->n = n;
if (*head == NULL)
{
*head = temp;
return (*head);
}
while (re->next)
re = re->next;
re->next = temp;
return (*head);
}
