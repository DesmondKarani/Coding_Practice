#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	/*int des = 99;*/
	int *ptr = malloc(sizeof(int));

	if (ptr == NULL)
	{
		fprintf(stderr, "No Memory, I repeat, NO MEMORY!\n");
		return -1;
	}

    *ptr = 98;
    printf("%d\n", *ptr);

    free(ptr);

    return (0);
}
