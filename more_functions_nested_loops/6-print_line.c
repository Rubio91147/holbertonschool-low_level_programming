#include "main.h"
/**
*print_line - funtion int n
*
*description - draws a straight line in the terminal.
*@n: the numbers
* return: 0
*/
void print_line(int n)
{
int len;

if (n > 0)
{
for (len = 0; len < n; len++)
_putchar('_');
}
_putchar('\n');
}
