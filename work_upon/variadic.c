#include <stdio.h>
#include <stdarg.h>
int Multiply(int integers, ...);
int main(void)
{
	printf("Multiplying 1 by 2 by 3 by 4 is = %d\n", Multiply(4, 1, 2, 3, 4));
	return 0;
}
int Multiply(int integers, ...)
{
	int i;

	/*list the arguments to use*/
	va_list args;
	int result = 1;

	va_start(args, integers);

	for (i = 0; i < integers; i++)
	{
		result = result * va_arg(args, int);
	}

	va_end(args);

	return result;
}
