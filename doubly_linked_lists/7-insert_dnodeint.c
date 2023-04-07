#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_node - creates a LL data node.
 * @n: data to insert into new node.
 * Return: address of new node or NULL if failed.
 */
static dlistint_t *new_node(int n)
{
dlistint_t *node;
node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);
node->n = n;
node->next = NULL;
return (node);
}
/**
 * insert_dnodeint_at_index - inserts a data node at given index into LL
 * @h: pointer to the head of the list
 * @idx: index to insert into
 * @n: data to insert into idx spot in LL
 * Return: address of new node or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new;
unsigned int i;
temp = *h;
if (!h)
return (NULL);
if (!(*h) && idx == 0)
{
*h = new_node(n);
return (*h);
}
for (i = 0; temp != NULL; i++)
{
if (i + 1 == idx)
{
new = new_node(n);
new->next = temp->next;
temp->next = new;
return (new);
}
temp = temp->next;
}
return (NULL);
}
