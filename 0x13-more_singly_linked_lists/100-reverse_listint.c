#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to the listint_t head to print
 *
 * Return: the number of nodes printed
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *before = NULL;
listint_t *after = NULL;
while (*head)
{
after = (*head)->next;
(*head)->next = before;
before = *head;
*head = after;
}
*head = before;
return (*head);
}
