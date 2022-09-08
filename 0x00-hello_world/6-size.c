#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char ch;
int int_g;
long int long_int;
long long int l_l_int;
float flot;
printf("Size of a char: %lu byte(s)\n", sizeof(ch));
printf("Size of an int: %lu byte(s)\n", sizeof(int_g));
printf("Size of a long int: %lu byte(s)\n", sizeof(long_int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(l_l_int));
printf("Size of a float: %lu byte(s)\n", sizeof(flot));
return (0);
}
