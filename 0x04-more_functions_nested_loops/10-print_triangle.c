#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: nothing
 */

void print_triangle(int size)

{

int n, c, m;

if (size <= 0)
{
_putchar('\n');
}

for (n = 0; n < size; n++)
{
for (c = 0; c < size; c++)
{
m = size - 1 - 1;
if (c < m)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
