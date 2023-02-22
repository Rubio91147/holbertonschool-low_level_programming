#include "main.h"

/**
* _isalpha - function
* @letter: character in upper or lower case
* description: chcks for lovercase character
*
* Return: 1 if true, 0 if false
*/
int _isalpha(char letter)
{
if (letter >= 97 && letter <= 122  || letter >= 65 && letter <= 90)
return 1;
else 
return 0;	
}
