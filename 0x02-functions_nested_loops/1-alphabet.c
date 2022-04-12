#include "main.h"

/**
* print_alphabet - print alphabet lowercase
*
* Return: Always 0.
*/
char print_alphabet(void)
{
 char c;	
	for(c = 'a'; c <= 'z'; c++)
	{
	    _putchar(c);
	}
	_putchar('\n');
	return 0;
}
