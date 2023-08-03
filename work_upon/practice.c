#include <stdio.h>
int des(int i)
{

	//here, we check if the entered variable is odd, and it is, we change it to even.
	if (i % 2 != 0)
	{
		i--;
	}

	// Here, we check if the variable is less than zero,
	// we terminate the program if it is.
	// Note, this is a separate "if" which is why we are not labelling it is else if.
	if (i < 0)
	{
		return 0;
	}

	//and here is our recursive function. If it is not a zero, then adds calls itself over and over.
	else if (i % 2 == 0)
	{
			 return i + des(i - 2);
	}
}
int main(void)
{
	int i;
	scanf("%d", &i);
	printf("The sum of all even numbers from %d are %d\n", i, des(i));
	return 0;
}
