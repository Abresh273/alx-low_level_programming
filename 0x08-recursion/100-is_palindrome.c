#include "main.h"
#include <stdio.h>

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}else{
	
	return (is_palindrome(s));
}}


