#include "main.h"

/**
* _puts - check the code for Holberton School students.
* @str: estring to be printed
* Return: Always 0.
*/

void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
