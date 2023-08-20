#include <stdio.h>

typedef float(*Pointer)(float, float);

float execute(float a, float b, float (*Pointer)(float, float));
float divide(float a, float b);
float multiply(float a, float b);

int main(void)
{
    printf("The multiplication of 3 by 4 is %f\n", execute(3, 4, multiply));
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

/*float execute(float a, float b, float (*Pointer)(float, float))*/
float execute(float a, float b, Pointer operation)
{
    return operation(a, b);
}
