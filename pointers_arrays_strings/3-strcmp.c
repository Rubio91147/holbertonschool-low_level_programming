#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: This is the char
 * @s2: This is the char
 *
 *Return: this is res
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
