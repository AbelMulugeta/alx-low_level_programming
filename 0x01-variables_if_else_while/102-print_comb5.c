#include <stdio.h>
/**
* main - loop through variables
* Return: 0
**/
int main(void)
{
int x = 0;
int y;

while (x <= 98)
{
y = x + 1;
while (y <= 99)
{
putchar(x / 10 % 10 + '0');
putchar(x % 10 + '0');
putchar(' ');
putchar(y / 10 % 10 + '0');
putchar(y % 10 + '0');
if (x == 98 && y == 99)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
y++;
}
x++;
}
return (0);
}
