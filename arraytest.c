#include <stdio.h>
int main(void)
{
	char *des = "How are you?";
	int j;

	for (j = 0; des[j]!= '\0'; j++)
		printf("Element %d is %c and it address is %p\n", j, des[j], des + 1);
	return 0;
}
