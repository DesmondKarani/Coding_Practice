#include <stdio.h>
int main(void)
{
	double flt_num = 123.45;

	printf("%lf\n", flt_num);

	double *pointer = &flt_num;
	
	*pointer = 543.21;

	printf("%lf\n", flt_num);

	return 0;
}
