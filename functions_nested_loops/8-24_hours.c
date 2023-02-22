#include "main.h"
#include <stdio.h>
/**
*jack_bauer - a function
*description minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*Return: is a void metod
*/
void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
printf("%02d:%02d\n", h, m);
}
}
}
