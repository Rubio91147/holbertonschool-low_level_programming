#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*
*Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
int nun;
char alfa;
for (nun = 1; nun <= 10; nun++)
{
for (alfa = 'a'; alfa <= 'z'; alfa++)
{
_putchar(alfa);
}
_putchar('\n');
}
}
