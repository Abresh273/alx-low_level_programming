#include "main.h"

/**
 * print_sign - find the sign of a value input
 *
 * @n: the int to evaluate
 * Return : Always 1.
 *
 *
 */

int print_sign(int n);
{
	if(n > 0)
	{
		_putchar("+");
		return (1);
	}
	else {
		if(n < 0)
		{
			_putchar("-");
                        return (-1);
		}
		else
		{
			_putchar("-");
                        return (-1);
		}
	}
}
