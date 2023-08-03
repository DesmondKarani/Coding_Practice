#include <stdio.h>
int main(void)
{
	int x, y;
	x = 5;
	y = 6;

	int *xx = &x;
	int *yy = &y;
	
	*xx = *xx * *yy;

	printf("%d\n", x);

	return 0;
}
