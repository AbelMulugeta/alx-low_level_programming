#include "main.h"
/**
* reverse_array - reverse the content of an array 
* @a: integer
* @n: integer
* Return: nothing
**/

void reverse_array(int *a, int n)
{

int x;
int i;
int y;
y = n - 1;

for (i = 0; i < y; i++, y--)
{
x = a[i];
a[i] = a[y];
a[y] = x;
}

}
