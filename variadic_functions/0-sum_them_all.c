#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * @...: variable list of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list parametros;
va_start(parametros, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(parametros, int);
}
va_end(parametros);
return (sum);
}
