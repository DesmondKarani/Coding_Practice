#include <stdio.h>
float ghasia(int g, int d, float e)
{
	float nongwe = (g * d) / e;
	return nongwe;
}
int main(void)
{
	float matokeo;
	matokeo = ghasia(10, 5, 25.55);
	printf("If you multiply ten by five, and then the result you divide by 25.55, the answer is %.4f\n", matokeo);
	return 0;
}
