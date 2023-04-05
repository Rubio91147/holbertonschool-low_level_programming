#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * get_dnodeint_at_index - deletes the head node of
 * a linked list and returns the nodes data
 * @head: pointer to the head of the list
 * @index: index address of the node.
 * Return: data of the head of the list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count;
if (!head)
return (NULL);
for (count = 0; head; count++)
{
if (count == index)
return (head);
head = head->next;
}
return (NULL);
}
