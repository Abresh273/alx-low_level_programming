// Online C compiler to run C program online
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int *n, ...)
{
    va_list args;
    
    va_start(args, n);
    int sum =0;
    
    for (int i=0;i<n;i++)
    {
        sum+= va_arg(args,int);
    }
    
     return (sum);
    va_end(args);
     return (0);
}
