#include <stdio.h>
/**
 * main - this program compares four numbers to show which is biggest.
 *
 * Return: 0 always a success
 */
double desmo(double J, double K, double L, double M);
int main(void)
{
printf("%f is the greatest\n", desmo(20, 40, 42, 21));
return 0;
}
double desmo(double J, double K, double L, double M){
	double num;
	if (J > K && J > L && J > M) {
	num = J;
	} else if (K > J && K > L && K > M) {
	num = K;
	} else if (L > J && L > K && L > M) {
	num = L;
	} else {
	num = M;
	}
	return num;
}
