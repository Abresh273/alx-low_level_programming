#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int num, mult, prod;
if(n < 15 && n > 0)
{
	for(num=0;num<=n;num++)
	{   
		for(mul=0; mul <= n;mul++)
			_putchar(mul*num);
		        _putchar(", ");
	}
}

}
