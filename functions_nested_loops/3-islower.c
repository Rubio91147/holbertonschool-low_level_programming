#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*_islower int c- Write a function that checks for lowercase , in lowercase
*
*Return: Always 0 (success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
