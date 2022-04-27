#include "main.h"

/*
 * _print_rev_recursion - function that prints a string in reverse.
 *
 *
 * @s : string input
 *
 *
 * Return : Always 0.
 */


void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
