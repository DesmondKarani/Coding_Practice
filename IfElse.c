#include <stdio.h>
/**
 * main - determining if a number is 0, postive, or negative.
 *
 * Return: 0 shows success.
 *
 */
int main(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number > 0)
	{
		printf("Mzee, the number is a positive nkt.\n");
	}
	else if (number < 0)
	{
		printf("Fala, hii number si ni negative bana\?\? ai\n");
	}
	else
	{
		printf("Sasa tunaongea mzee\n");
	}

	return (0);
}
