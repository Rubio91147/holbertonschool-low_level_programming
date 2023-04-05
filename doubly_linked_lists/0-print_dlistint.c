#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all elements of a linked list
 * @h: head of the linked list to print.
 * Return: number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
int count;
for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
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
