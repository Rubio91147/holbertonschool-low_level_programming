#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - a function that creates an array of chars
 * @size: is size array
 * @c: is char
 * Return: NUll if size = 0 . a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int k;
char *string;
string = malloc(sizeof(char) * size);
if (string == NULL || size == 0)
{
return (NULL);
}
else
{
for (k = 0; k < size; k++)
{
string[k] = c;
}
return (string);
}
}
