#include <stdio.h>
#include "lists.h"
/**
 * add_node - add a new node at the beginning
 * @head: pointer to the list_t list to print
 * @str: string duplicated
 * Return: the number of nodes printed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
unsigned int i = 0;
while (str[i])
i++;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
temp->str = strdup(str);
temp->len = i;
temp->next = (*head);
(*head) = new;
return (temp);
}
