#include "main.h"
/**
*_strncat - Write a function that concatenates two strings.
*
*@dest: This is the output dest
*@src: This is the input source
*@n: This is the size
* Return: This return to dest, that concatenates two strings
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
