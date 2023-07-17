#include <stdio.h>
char ghasia(int g, char d, int e)
{
	int nongwe = (g * d) / e;
	return nongwe;
}
int main(void)
{
	char matokeo;
	matokeo = ghasia(10, 'a', 10);
	printf("If you multiply ten by the value of char 'a', and then the result you divide by 25.55, the answer is %c\n", matokeo);
	return 0;
}
