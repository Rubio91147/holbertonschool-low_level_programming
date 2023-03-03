#include "main.h"
#include <stdio.h>
/**
* print_array - elements of an array of integers, followed by a new line,
* in order separated by a comma followed by a space.
* @n: is the number of elements of the array to be printed
* @a: is the number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
int index;
for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index == n - 1)
continue;
printf(", ");
}
printf("\n");
}
