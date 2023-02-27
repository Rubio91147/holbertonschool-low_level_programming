#include "main.h"
#include <stdio.h>

/**
 * swap_int-function
 * description - that swaps the values of two integers.
 * @a: is the argument of the function
 * @b: is the argument of the function
 *
 */

void swap_int(int *a, int *b)

{
int c;
c = *a;
*a = *b;
*b = c;
}
