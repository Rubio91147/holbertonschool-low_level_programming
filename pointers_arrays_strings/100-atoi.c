#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

=======
>>>>>>> refs/remotes/origin/master
/**
* _atoi - Convert string to an integer.
* @s: Pointer to a character string.
*
* Return: void.
*/
<<<<<<< HEAD

=======
>>>>>>> refs/remotes/origin/master
int _atoi(char *s)
{
int sign;
unsigned int num;
char *temp;
temp = s;
num = 0;
sign = 1;
while (*temp != '\0' && (*temp < '0' || *temp > '9'))
{
if (*temp == '-')
sign *= -1;
temp++;
}
if (*temp != '\0')
{
do {
num = num * 10 + (*temp - '0');
temp++;
} while (*temp >= '0' && *temp <= '9');
}
<<<<<<< HEAD
return (num * sign);
=======
return (num *sign);
>>>>>>> refs/remotes/origin/master
}
