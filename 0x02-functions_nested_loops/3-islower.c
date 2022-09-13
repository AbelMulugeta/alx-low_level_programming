#include "main.h"
/**
 * _islower - 1 if letter is lowercase, 0 if not.
 * Return: 1 if lowercase, 0 if not lowercase
 * @c: char letter
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
