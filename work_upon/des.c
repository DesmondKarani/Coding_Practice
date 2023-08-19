#include <stdio.h>
int main(void)
{
    int array[3];
    int i, n;
    i = 5;
    n = 3;

    array[i] = n;

    printf("The fifth element is %d\n", array[i]);
    return 0;
}
