#include <stdio.h>
#define HiiMwaka 2023 // using #define makes it easier to edit variables that are tied to specific life events like new year
/**
 * main - meant to show age and years to death
 *
 * Return: 0 Success
 */
int main(void)
{
	int age, Mwaka;
	
	printf("what year were you born dude?\n");
	scanf("%d", &Mwaka);
	age = HiiMwaka - Mwaka;

	printf("Wow, you are %d years old\n", age);

	if (age < 18)
	{
		printf("You are underage though, you are not qualified!!!\n");
	}else
		printf("You are a mature adult, stop complaining about life nigg...!\n");

	return 0;
}
