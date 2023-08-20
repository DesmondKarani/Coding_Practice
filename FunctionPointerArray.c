#include <stdio.h>
#include <stdlib.h>

/* This is a list of prototypes */
int Addition(int a, int b);
int Substraction(int a, int b);
int Multiply(int a, int b);
int Division(int a, int b);

int main(void)
{
        int choice, x, y;

        /* This is how to declare and initialize a function pointer
         * In this case, the function pointer points to an array of functions
         */
        int (*Pointer[])(int, int) = {Addition, Substraction, Multiply, Division};
        printf("0 = Addition, 1 = Substraction, 2 = Multiplication, 3 = Division\n");
        scanf("%d", &choice);

        if (choice < 0 || choice > 3)
        {
            printf("Invalid Choice\n");
            return 1;
        }

        printf("Enter numbers for operation:\n");
        scanf("%d %d", &x, &y);

        printf("Result of %d and %d is = %d\n", x, y, Pointer[choice](x, y));
        return 0;
}
int Division(int a, int b)
{
    if (b == 0)
    {
    printf("You can't divide by 0\n");
    exit(1);
    }

    else
    return a / b;
}

int Multiply(int a, int b)
{
    return a * b;
}
int Addition(int a, int b)
{
    return a + b;
}
int Substraction(int a, int b)
{
    return a - b;
}
