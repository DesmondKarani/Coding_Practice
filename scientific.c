#include <stdio.h>
//stdli
float mjinga(int r, float f, char g)
{
	float aki;
	aki = (r * f)/g;
	return aki;
}
int main(void)
{
	float ghasia_wewe;
	ghasia_wewe = mjinga(54, 32.89, 'A');
	printf("Fala, skiza, if you multiply 54 by 32, alafu the outcome you divide by value of char A, jibu ni hii %e matako! aaah!\n", ghasia_wewe);
	return 0;
	}
