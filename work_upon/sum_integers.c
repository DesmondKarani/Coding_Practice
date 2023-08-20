#include <stdio.h>
#include <stdarg.h>
int Average(int Numbers, ...);
int main(void)
{
	printf("The average of 20, 18, 45, 90, and 32 is %d\n", Average(5, 20, 18, 45, 90, 32));
	return 0;
}
int Average(int Numbers, ...)
{
	int i;

	va_list arguments;
	int AverageNum = 0;

	va_start(arguments, Numbers);
	for (i = 0; i < Numbers; i++)
	{
		AverageNum = AverageNum + va_arg(arguments, int);
	}

	va_end(arguments);

	return AverageNum / Numbers;
}
