#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in linked list
 * @h: head of the linked list to print.
 * Return: number of nodes printed
 */

size_t dlistint_len(const dlistint_t *h)
{
int count;
for (count = 0; h != NULL; count++)
{
if (h->next != NULL)
h = h->next;
else
{
count++;
break;
}
}
return (count);
}
