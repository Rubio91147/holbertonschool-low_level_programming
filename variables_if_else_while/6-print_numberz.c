#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
char numero = '0';
for (numero = '0'; numero <= '9'; numero++)
{
putchar(numero);
}
putchar('\n');
return (0);
}
