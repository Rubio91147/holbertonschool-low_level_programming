#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - rees up a dlinked list
 * @head: head of list to free
 */

void free_dlistint(dlistint_t *head)
{
if (head)
{
free_dlistint(head->next);
free(head);
}
}
