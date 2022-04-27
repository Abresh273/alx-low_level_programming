#include "main.h"

/*
 * _print_rev_recursion -  function that prints a string in reverse.
 *
 *
 * @s : string input
 *
 *
 * Return : Always 0.
 */

void _print_rev_recursion(char *s)
{
	int i = 1;
        if(s[i] == '\0')
	{
		_putchar(s[-i]);
		return (0);


	}
	  i++;
	 _print_rev_recursion(*s);

}
