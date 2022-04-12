#include "main.h"

/**
 *int _isalpha: cheacks for aplphabetic charator
 *@c: The int to print
 *
 * Retirn: Always 0.
 *
 */

int _isalpha(int c)
{
if (c <= "Z" && c >= "A" || c <= "z" && c >= "a")
{
return (1);
}
else 
{
return (0);			
}
}
