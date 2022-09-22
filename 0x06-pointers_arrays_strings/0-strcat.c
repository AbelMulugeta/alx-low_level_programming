#include "main.h"
/**
* *_strcat - a function that concatenates strings
* @dest: string
* @src: string
* Return: string
**/

char *_strcat(char *dest, char *src)
{
int x;
int y;

for (x = 0; dest[x] != '\0'; x++)
{
}
for (y = 0; src[y] != '\0'; y++)
{
dest[x + y] = src[y];
}
return (dest);
}
