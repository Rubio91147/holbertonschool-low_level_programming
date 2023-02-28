#include "main.h"
/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
*/

void rev_string(char *s)
{
int reve = 0, index = 0;
char tmp;
while (s[index++])
reve++;
for (index = reve - 1; index >= reve / 2; index--)
{
tmp = s[index];
s[index] = s[reve - index - 1];
s[reve - index - 1] = tmp;
}
}
