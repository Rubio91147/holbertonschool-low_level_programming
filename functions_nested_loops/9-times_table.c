#include "main.h"
#include <stdio.h>
/**
*times_table - a function
*description   prints the 9 times table, starting with 0
*Return: is a void metod
*/
void times_table(void)
{
int i, j, incremento, tab;
for (i = 0; i <= 9; i = incremento)
{
for (j = 0; j <= 9; j++)
{
tab = i * j;
printf("%d", tab);
if (j != 9)
printf(", ");
}
printf("\n");
incremento++;
}
}
