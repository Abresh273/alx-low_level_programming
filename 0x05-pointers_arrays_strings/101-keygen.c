#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 *
 *task 11
 *
 *
 */

int main(void)
{
	int num;
	srand(time(0));
	num = rand();
	for (num =0 ; num<15;num++){
	
	printf("%i\n",num % 50);
	}
	return (0);
}

