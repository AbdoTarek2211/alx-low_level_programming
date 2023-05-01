#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to the list_t list to print
 * Return: empty list
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head)
{
temp = (*head)->next;
free(*head);
(*head) = temp;
}
(*head) = NULL;
}
