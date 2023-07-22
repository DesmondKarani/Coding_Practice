#include <stdio.h>
/**
 * main - program to help user calculate two number.
 *
 * Return: O always a success.
 */
void des();
int main(void)
{
	int f, g, k;

	printf("Enter the first number please:\n");
	scanf("%d", &f);
	printf("Enter the second number please:\n");
	scanf("%d", &g);

	k = f * g;

	printf("Multiplying the two number gives you: %d\n", k);

	des();

	return (0);
}
void des(){
	printf("Happy coding dude\n");
}
