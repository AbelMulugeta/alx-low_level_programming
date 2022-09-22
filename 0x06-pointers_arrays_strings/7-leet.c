#include "main.h"

/**
* *leet - encoding a string into 1337
* @str: string
* Return: string
**/

char *leet(char *str)
{

int x;
int y;

char s[] = "a4e3o0t7l1";

x = 0;

y = 0;

while (str[x] != '\0')
{
for (y = 0; y < 10; y += 2)
{
if (str[x] == s[y] || str[x] == s[y] - 32)
{
str[x] = s[y + 1];
break;
}
}
x++;
}
return (str);
}
