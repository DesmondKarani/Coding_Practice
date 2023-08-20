#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

int main(void)
{
        printf("Summing 1, 2, 3 give %d\n", sum_them_all(3, 1, 2, 3));
        return 0;    
}

int sum_them_all(const unsigned int n, ...)
{
        int a;
        int result = 0;

        va_list TheArgument;

        va_start(TheArgument, n);

        for (a = 0; a < n; a++)
        result = result + va_arg(TheArgument, int);

        va_end(TheArgument);

        return result;
}
