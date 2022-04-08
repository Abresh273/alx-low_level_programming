#include <stdio.h>

/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
char c, d;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
