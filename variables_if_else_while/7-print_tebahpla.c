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
char alfabeto = 'z';
for (alfabeto = 'z'; alfabeto >= 'a'; alfabeto--)
{
putchar(alfabeto);
}
putchar('\n');
return (0);
}
