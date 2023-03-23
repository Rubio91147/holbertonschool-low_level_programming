#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a list of strings
 * @separator: characters used to delimit
 * @n: nmber of items to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list parametros;
unsigned int i;
char *cadena;
va_start(parametros, n);
for (i = 0; i < n; i++)
{
cadena = va_arg(parametros, char*);
if (cadena != NULL)
{
printf("%s", cadena);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(parametros);
}
