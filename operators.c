#include <stdio.h>
/**
 * main - to test different operators in c.
 *
 * Return: 0 is always a succes.
 */
double des_to_the_moon(double D, double C);
/* this is a function declaration, using its prototype*/
int main(void)
{
	int age;
	age = 25;

	printf("In 2025, I will be %d years old manze, damn!\n", age + 2);
	/*This code above shows that you can put math inside the printf function
	 * C is not dumb, it knows which variables are in question
	 */
	printf("by 2030 May I will be %.3f years old msee\n", (float)age + 7.5);
	/*Above, adding float in brackets is a form of typecasting the variable
	 * only for this expression
	 * still remains an int elsewhere
	 */

	double result = des_to_the_moon(4, 9);
	if (result < 1)
	{
		printf("Des atapata %d asiposoma hii C\n", (int)result);
	}else
	printf("Des still gat this man!!\n");

	return (0);
}

/*the actual function*/
double des_to_the_moon(double D, double C)
{
	double result = D * C;
	return result;
}
