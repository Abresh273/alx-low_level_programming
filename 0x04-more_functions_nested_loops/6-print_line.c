#include "main.h"
/*
 * print_line - draws a straight line in the terminal 
 *
 * @n: number of _
 *
 * Return: Always 0.
 */

void print_line(int n)
{
int i;
for (i = 0;i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
