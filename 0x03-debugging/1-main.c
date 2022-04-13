#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
/*the follwing is infinite loop*/
        while (i < 10)
        {
                putchar(i);
        }
/*this Will never be printed*/
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
