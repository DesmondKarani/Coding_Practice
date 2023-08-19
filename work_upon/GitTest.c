#include <stdio.h>
#define NUMBERS 1, 2, 3, 5, 8, 13
int main(void)
{
	int des[] = {NUMBERS};
	int i;

	for (i = 0; i < sizeof(des) / sizeof(des[0]); i++)
		printf("Mic testing testing %d\n", des[i]);
	putchar(10);
	return 0;
}
