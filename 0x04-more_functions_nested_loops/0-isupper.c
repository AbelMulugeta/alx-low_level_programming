#include "main.h"

/**
* _isupper - returns 1for uppercase and 0 other
* @c: takes a character
* Return: 0 for uppercase, 1 for lowercase
**/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
