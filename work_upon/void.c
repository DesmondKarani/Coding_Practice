#include <stdio.h>
int betel()
{
	return 20;
}
int main(void)
{
	int result;
	result = betel(13);
	printf("Result = %d\n", result);

	// Declaration after a statement, which is not allowed in C89/GNU89.
	// Also, using C++ comment style 😋
	int test = 10;
    printf("Test = %d\n", test);

return 0;
}
