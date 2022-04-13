#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
int main(void)
{
void print_times_table(int n)
{
int num, mult;
if (n < 15 && n > 0)
{
for (num = 0; num <= n; num++)
{
for (mult = 0; mult <= n; mult++)
_putchar(mult*num);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
}

