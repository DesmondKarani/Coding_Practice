#include <stdio.h>
int divisionea(int r, int s) {
	int matokeo = r / s;
	return matokeo;
}
int main(void)
{
	int div;
	div = divisionea(90, 5);
	printf("Dividing 90 by 5 yields %d\n", div);
	return 0;
	}

