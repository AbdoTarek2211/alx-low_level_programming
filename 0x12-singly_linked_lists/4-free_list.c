#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to the list_t list to print
 * Return: empty list
 */
void free_list(list_t *head)
{
list_t temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
