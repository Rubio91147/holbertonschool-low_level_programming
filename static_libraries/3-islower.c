#include "main.h"

/**
*_islower - function
*@c: character in uppercase or lower case
*description: checks for lowercase characters
*
*Return: 1 if true, 0 if false
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
