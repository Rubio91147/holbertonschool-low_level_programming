#include "main.h"
/**
* string_toupper - Write a function that changes all lowercase
* string to uppercase.
*
* @str: The string to be changed
*
* Return: Lowercase changed to uppercase of the string
*/
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
