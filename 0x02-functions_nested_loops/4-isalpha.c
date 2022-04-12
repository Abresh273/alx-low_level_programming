#include "main.h"

/**
 * _isalpha: cheacks for aplphabetic charator
 * @c: The int to print
 *
 * Retirn: Always 0.
 *
 */

int _isalpha(int c)
{
if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
{
return (1);
}
else
{
return (0);
}
}
