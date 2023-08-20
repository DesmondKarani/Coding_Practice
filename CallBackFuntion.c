#include <stdio.h>
#include <stdlib.h>
/**
 * main - a simple arithmetic function that uses 
 * 	callback function to call the operation functions.
 * This uses if else statements, but can be simplified with switch statements.
 */

int CallbackFunc(int a, int b, int (*Pointer)(int, int));
int Addition(int a, int b);
int Substraction(int a, int b);
int Multiply(int a, int b);
int Division(int a, int b);

int main(void)
{
        int choice, x, y;
        printf("0 = Addition, 1 = Substraction, 2 = Multiplication, 3 = Division\n");
        scanf("%d", &choice);

        if (choice == 0)
	{
		printf("Enter numbers for operation:\n");
		scanf("%d %d", &x, &y);
		printf("Result of %d and %d is = %d\n", x, y, CallbackFunc(x, y, Addition));
		return 0;
	}


	else if (choice == 1)
	{

		printf("Enter numbers for operation:\n");
		scanf("%d %d", &x, &y);
		printf("Result of %d and %d is = %d\n", x, y, CallbackFunc(x, y, Substraction));
		return 0;
	}


	else if (choice == 2)
	{

		printf("Enter numbers for operation:\n");
		scanf("%d %d", &x, &y);
		printf("Result of %d and %d is = %d\n", x, y, CallbackFunc(x, y, Multiply));
		return 0;
	}

	else if (choice == 3)
	{

		printf("Enter numbers for operation:\n");
		scanf("%d %d", &x, &y);
		printf("Result of %d and %d is = %d\n", x, y, CallbackFunc(x, y, Division));
		return 0;
	}


	else
	{
		printf("Invalid choice\n");
		exit(1);
	}
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
/* This is the callback function. Notice it uses function pointer to 
 * pass function addresses as arguments to the function
 */
int CallbackFunc(int a, int b, int (*Pointer)(int, int))
{
	return Pointer(a, b);
}
