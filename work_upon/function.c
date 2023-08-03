#include<stdio.h>
int des(int g, int r);
int main(void)
{
	int G;
	G = 7 * des(4, 5);
	printf("The new value of G is %d\n", G);
	return 0;

}
int des(int g, int r)
{
	int result;
	result = g * r;
	return result;
}
