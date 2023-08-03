#include <stdio.h>
int main(void)
{
	int j;

	int *g = &j;

	*g = 90001;

	printf("%p\n", g);
	printf("%d\n", *g);
	printf("%d\n", j);

	return 0;
}
