#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *print_alphabet - unction that prints the alphabet, in lowercase
 *
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
