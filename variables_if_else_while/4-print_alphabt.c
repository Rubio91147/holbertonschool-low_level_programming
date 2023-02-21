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
char alfabeto = 'a';
for (alfabeto = 'a'; alfabeto <= 'z'; alfabeto++)
{
  if(alfabeto != 'e' && alfabeto !='q'){
        putchar(alfabeto);
    }
}
putchar('\n');
return (0);
}
