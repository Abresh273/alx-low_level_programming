#include "main.h"
#include <stdio.h>
/**
 * print_array - hat prints n elements of an array of integers
 *
 * @a : input integer
 *
 * @n: input integer
 *
 * Return : Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i=0;i< n-1 ;i++)
	{
		printf("%d, ",a[i]);
	}
	         printf("%d", a[i+1]);
}
