#include <stdio.h>
void swap(int *y, int *z);
int stringlength(char *z);
int main(void)
{
	int x, y, z[10], i;
	int *ip;
	x = 1;
	void *des;
	char *sed = "Leo umekula nini";

	ip = &x;
	y = *ip;
	*ip = 0;
	des = &y;
	*(int *)des = 34;

	for (i = 0; i <= 9; i++)
		z[i] = 'a' + i;

	printf("The values of x, y, and z are %d, %d, and %c\n", x, y, z[9]);

	swap(&x, &y);
	printf("The new value of x and y are %d and %d\n", x, y);

	printf("the size of the string is %d\n", stringlength(sed));

	return 0;
}
void swap(int *y, int *z)
{
	int temp;

	temp = *y;
	*y = *z;
	*z = temp;


}
int stringlength(char *z)
{
	int d;
	for (d = 0; *z != '\0'; z++)
		d++;
	return d;
}
