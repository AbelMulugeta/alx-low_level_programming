#include "main.h"
/**
 * main - Print "_putchar".
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
char a[] = "_putchar";
int i = 0;

while (a[i] != '\0')
{
_putchar(a[i]);
i++;
}
_putchar('\n');
return (0);

}
