#include <stdio.h>

typedef int (*Ged)(int, int);

int multi(int a, int b);
int div(int a, int b);
int execute(int a, int b, int (*Pointer)(int, int));

int main(void)
{
	printf("Multiplying 2 by 2 is %d\n", execute(2, 2, multi));
}

int div(int a, int b)
{
	return a / b;
}
int multi(int a, int b)
{
	return a * b;
}
int execute(int a, int b, Ged operator)
{
	operator(a, b);
}
