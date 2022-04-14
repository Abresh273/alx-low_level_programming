#include "main.h"
/*
 * more_numbers(void) - print more numbers
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for(j =  0; j <= 14; j++)
	       	{
			_putchar(j);
		}
		_putchar("\n");
	}
	_putchar("\n");
}
