#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
char alfabeto[24] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};
int i = 0;
for (i = 0; i <= 24; i++)
{
putchar(alfabeto[i]);
}
}
