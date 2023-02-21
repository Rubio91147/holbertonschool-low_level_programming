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
int numbers = 48;
int letters = 97;
for (numbers = 48; numbers <= 57; numbers++)
{
putchar(numbers);
}
for (letters = 97; letters <= 102; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
