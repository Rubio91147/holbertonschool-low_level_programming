#include "main.h"
/**
* _memset - function that fills memory with a constant byte.
*
* @s:function arguments
* @b:function arguments
* @n:function arguments
*
*Return: a pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
