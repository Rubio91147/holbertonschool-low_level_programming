#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to end of dlistint_t list
 * @head: head of the linked list to print.
 * @n: node data to add to list
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last = *head;
new_node = (malloc(sizeof(dlistint_t)));
if (!new_node)
return (NULL);
if (*head == NULL)
{
new_node->next = NULL;
new_node->n = n;
*head = new_node;
return (*head);
}
do {
if (last->next == NULL)
{
last->next = new_node;
new_node->next = NULL;
new_node->n = n;
return (*head);
}
last = last->next;
} while (last);
free(new_node);
return (*head);
}
