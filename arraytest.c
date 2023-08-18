#include <stdio.h>
int sed(int x, int y);
int main(void)
{
	//char des[] = "How are you?";
	//int j;
	int k, l, result;
	int (*ptr)(int, int);
	ptr = &sed;
	
	printf("enter two numbers:\n");
	scanf("%d %d", &k, &l);
	
	result = ptr(k, l);

	printf("The multiple of the two number is %d\n", result);

	//for (j = 0; des[j]!= '\0'; j++)
		//printf("Element %d is %c and it address is %p\n", j, des[j], des + j);
	return 0;
}
int sed(int x, int y)
{
	return x * y;
}
