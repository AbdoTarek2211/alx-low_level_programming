#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns sum of elements
 * @head: pointer to the head list to add to
 *
 * Return: the number of nodes printed
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
