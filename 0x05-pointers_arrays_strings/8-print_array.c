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
	int i =0;
	 printf("%d, ",a[i]);

	for (i=1;i< n ;i++)
	{
		printf(", %d",a[i]);
	}
}
