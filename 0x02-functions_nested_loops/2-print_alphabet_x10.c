#include "main.h"
/**
 * print_alphabet_x10  alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i = 0;
char repeat;
while (i < 10)

{
repeat = 'a';
while (repeat <= 'z')
{
_putchar(repeat);
repeat++;
}
_putchar('\n');
i++;
}
}
