#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - returns number of elements
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = (*head);
return (temp);
}
