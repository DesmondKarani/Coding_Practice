#include <stdio.h>

typedef float (*operation)(float, float);

float div(float a, float b);
float multi(float a, float b);
float execute(float a, float b,float (*ptr)(float, float));

int main(void)
{
        printf("Multiplying 4 by 3 is %.2f\n", execute(4, 3, multi));
        return 0;
}
float div(float a, float b)
{
    return a / b;
}
 float multi(float a, float b)
{
   return a * b;
}
/*float execute(float a, float b, float (*ptr)(float, float))*/
float execute(float a, float b, operation ptr)
{
    return ptr(a, b);
}
