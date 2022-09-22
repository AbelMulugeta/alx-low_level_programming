#include "main.h"
/**
* *_strncpy - copying a string
* @dest: string
* @src: string
* @n: integer
* Return: string
**/
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;

while (src[x] != '\0')
{
if (x < n)
{
dest[x] = src[x];
}
x++;
}
while (x < n)
{
dest[x] = '\0';
x++;
}
return (dest);
}
