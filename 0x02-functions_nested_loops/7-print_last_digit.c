#include "main.h"
/**
 * print_last_digit - return the last digit.
 *
 * @c: integer input
 *
 * Return: Always 0.
 */

int print_last_digit(int c)
{
if (c > 0)
{
return c % 10;
}
else
{
return -1*(c % 10);
}
}
