#include <stdio.h>
float ghasia(int g, char d, float e)
{
	float nongwe = (g * d) / e;
	return nongwe;
}
int main(void)
{
	float matokeo;
	matokeo = ghasia(10, 'a', 25.55);
	printf("If you multiply ten by the value of char 'a', and then the result you divide by 25.55, the answer is %.4f\n", matokeo);
	return 0;
}
