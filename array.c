#include <stdio.h>
int main(void)
{
	int salary [] = {100000, 150000, 70000, 500000, 60000, 75000};
	float loans [5];
	char matusi [10] = "fuuuck!";
	printf("Most Kenyans are paid between %d and %d, very few actually get paid %d\n", salary [2], salary [4], salary [3]);
	printf("By the way uko na loan? How much? Nishow:");
	scanf("%f", &loans[3]);
	printf("You loan balance is %.3f ???? Jamaaa umesotaa, f*ck! %s 😂😂🙂\n", loans [3], matusi);
	return 0;
}
