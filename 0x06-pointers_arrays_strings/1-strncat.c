#include "main.h"
/**
* *_strncat - Adding two strings.
* @dest: string to be appended
* @src: string to be appended from
* @n: number of bytes from src
* Return: a pointer to the resulting string dest
**/
char *_strncat(char *dest, char *src, int n)
{
int x,y;

if (n <= 0)
{
return (dest);
}
x = 0;
y = 0;
while (dest[x] != '\0')
{
x++;
}
while (y < n && src[y] != '\0')
{
dest[x++] = src[y++];
}
dest[x++] = '\0';
return (dest);
}
