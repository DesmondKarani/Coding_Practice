#include <stdio.h>
int summation(int x, int y);
int main(void)
{
	int result;
	int (*SummationPointer)(int, int);

	/* *
	 * Please note, in the value assignement of function pointers, you
	 * can just pass the name of the function without the & since that 
	 * name represent the initial address of the function.
	 */
	SummationPointer = &summation;

	result = SummationPointer(10, 10);

	printf("Summing 10 and 10 yields %d", result);

	return 0;

}
int summation(int x, int y)
{
	return x + y;
}
