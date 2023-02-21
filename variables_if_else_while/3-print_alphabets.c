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
char lower = 'a';
char upper = 'A';
for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');
return (0);
}
