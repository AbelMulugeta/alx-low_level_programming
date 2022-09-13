#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: type
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
int x;

if (n < 0)
{
x = -1 * (n % 10);
_putchar(x + '0');
return (x);
}
else
{
x = n % 10;
_putchar(x + '0');
return (x);
}
}
