#include <stdio.h>
/**
 * main - calculating sum of two numbers
 *
 * Return: must be 0 to be error free
 */
int main(void)
{
	int number1, number2, sum;

	printf("enter the first number: ");
	scanf("%d", &number1);

	printf("Enter the second one please: ");
	scanf("%d", &number2);

	sum = number1 + number2;

	printf("Mzee, the sum of %d and %d is: %d\n", number1, number2, sum);
	printf("\xF0\x9F\x98\x80\n");/*this is a unicode for grinning face*/	
	return (0);
}
