#include <stdio.h>
int main(void)
{
	int H, J, K, L, M;
	printf("Please enter a letter: ");
	H = getc(stdin);
	J = getchar();
	K = getchar();
	L = getchar();
	M = getchar();
	printf("The LETTERS you entered are %c%c%c%c%c\n", H, J, K, L, M);
	return 0;
}
