#include <stdio.h>

/* prototypes */
float Sum(float x, float y);
float Div(float x, float y);
float Multiply(float x, float y);
float Minus(float x, float y);
float Modulus(float x, float y);

/* Main function */
int main(void)
{
	int choice;
	float (*ptr[])(float x, float y) = {Sum, Div, Multiply, Minus, Modulus};

	float a, b, result;

	printf("0 = Addition, 1 = Substraction, 2 = Multiplication, 3 = Division, 4 = Modulus\n");
	printf("Please enter your choice: ");
	scanf("%d", &choice);

	printf("\nPlease enter the numbers for the operation: ");
	scanf("%f %f", &a, &b);


	printf("The answer is %.3f\n", ptr[choice](a, b));

	return 0;


}

/* The functions */
float Div(float x, float y)
{
	return x / y;
}
float Sum(float x, float y)
{
	return x + y;
}
float Multiply(float x, float y)
{
	return x * y;
}
float Minus(float x, float y)
{
	return x - y;
}
float Modulus(float x, float y)
{
	return (int)x % (int)y;
}
