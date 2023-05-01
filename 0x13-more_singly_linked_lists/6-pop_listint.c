#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - returns number of elements
 * @head: pointer to the head list to add to
 *
 * Return: the number of nodes printed
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int value;
if (head == NULL || (*head) == NULL)
return 0;
value = (*head)->n;
temp = (*head)->next;
free(*head);
(*head) = temp;
return (value);
}
