#include "main.h"
/**
*print_numbers - 0-9
*description - prints the from 0-9
*
*return: 0
*/
void print_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)
_putchar((num % 10) + '0');
_putchar('\n');
}
