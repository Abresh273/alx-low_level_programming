#include "main.h"

/**
* print_sign - return 0 letter not lowercase, 1 letter lowercase
*
* @n: the int to evaluate
* * Return : Always 1.
*
*
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
}
