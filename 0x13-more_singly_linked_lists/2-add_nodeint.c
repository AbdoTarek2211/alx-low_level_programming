#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - returns number of elements
 * @head: pointer to the head list to add to
 * @n: number to be added
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
(*head) = temp;
return (*head);
}
