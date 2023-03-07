#include "main.h"
/**
 * _pow_recursion - a function returns the value of x raised to the power of y.
 * @x: Number Integer
 * @y: Power
 *
 * Return: On (success) .
 */
int _pow_recursion(int x, int y)
{
int res;
if (y < 0)
{
res = -1;
}
else if (y == 0)
{
res = 1;
}
else
{
res = x * _pow_recursion(x, y - 1);
}
return (res);
}
