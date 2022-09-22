#include <stdio.h>
#include "main.h"

/**
* print_number - prints an integer
* @n: integer
**/

void print_number(int n)
{

unsigned int nmbr;

if (n < 0)
{
nmbr = -n;
_putchar('-');
}
else
nmbr = n;
if (nmbr > 9)
{
print_number(nmbr / 10);
}
_putchar(nmbr % 10 + '\0');
}
