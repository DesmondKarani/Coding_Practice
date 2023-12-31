#include <stdio.h>

/* prototypes */
float Sum(float x, float y);
float Div(float x, float y);
float Multiply(float x, float y);
float Minus(float x, float y);
int Modulus(int x, int y);

/* Main function */
int main(void)
{
	int choice;
	float a, b, result;

	printf("0 = Addition, 1 = Substraction, 2 = Multiplication, 3 = Division, 4 = Modulus\n");
	printf("Please enter your choice: ");
	scanf("%d", &choice);

	printf("\nPlease enter the numbers for the operation: ");
	scanf("%f %f", &a, &b);

	switch(choice)
	{
		case 0:
			result = Sum(a, b);
			break;

		case 1:
			result = Minus(a, b);
			break;

		case 2:
			result = Multiply(a, b);
			break;

		case 3:
			result = Div(a, b);
			break;

		case 4:
			result = Modulus(a, b);
			break;


	}

	printf("The answer is %.3f\n", result);

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
int Modulus(int x, int y)
{
	return x % y;
}
