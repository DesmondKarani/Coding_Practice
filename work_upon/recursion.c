#include <stdio.h>
int factorial (int j);
int main(void)
{
	int j;
	char d;
	printf("Want to know the factorial of any number? Enter it below!\n");
	scanf("%d", &j);
	printf("The factorial of %d is %d\n", j, factorial (j));
	printf("Wanna know how?\n");
	scanf(" %c", &d);
	if (d == 'Y')
	{
		printf("It is because a facrorial seeks to know the number of combinations that can be achieved with it\n");
	}
	else if (d == 'N')
	{
		printf("oooohhh 😔 I'm a bit dissapointed... fala\n");
	}
	else
		printf("Fala ulifaa kuweka Y or N for Yes or No! nkt!!\n");

	return 0;	
}
int factorial (int j)
{
	if (j <= 1)
	{
		return 1;
	}
	return j * factorial(j - 1);
}
