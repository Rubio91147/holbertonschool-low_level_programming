#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_dlistint2 - frees up a linked list and sets head to NULL
 * @head: head to set to null
 */

void free_dlistint2(dlistint_t **head)
{
dlistint_t *temp;
if (head == NULL)
return;
if ((*head)->next != NULL)
temp = (*head)->next;
else
{
free(*head);
*head = NULL;
return;
}
if (*head)
{
free_dlistint2(&temp);
free(*head);
}
*head = NULL;
}
