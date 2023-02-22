#include "main.h"
#include <stdio.h>
/**
*jack_bauer - a function
*description minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*Return: is a void metod
*/
void jack_bauer(void)
{
int n1, n2;
for (n1 = 0; n1 <= 9; n1++)
{
printf("00:0%d\n", n1);
}
for (n2 = 0; n2 <= 9; n2++)
{
printf("23:0%d\n", n2);
}
}
