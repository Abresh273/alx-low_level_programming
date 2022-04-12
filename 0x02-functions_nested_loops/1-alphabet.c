#include "main.h"

/**
* print_alphabet - print alphabet lowercase
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	
	for(char c = 'a'; c <= 'z'; c++)
	{
		_putchar("%c",c);
	}
	_putchar('\n');
	return 0;
}
