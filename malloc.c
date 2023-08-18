#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c;
	int *ptr;

	printf("Please enter the number of memory slots you require from the heap:\n");
	scanf("%d", &a);

	ptr = malloc(a * sizeof(int));

	if (ptr == NULL)
	{
		printf("I gathered no memory, sorry...\n");
		return 1;
	}

	printf("Please enter the variables you want to store in the heap\n");
	for (b = 0; b < a; b++)
	{
		scanf("%d", ptr + b);
	}

	printf("The variables stored in the heap are:\n");
	for (c = 0; c < a; c++)
	{
		printf("%d ", *(ptr + c));
	}
	putchar(10);

	free(ptr);

	return 0;

}
