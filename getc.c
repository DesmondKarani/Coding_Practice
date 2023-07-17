#include <stdio.h>
int main(void)
{
	int f, u, c, k;
	printf("Mkuu, weka the four characters you think you have:\n");
	f = getc(stdin);
	u = getchar();
	c = getchar();
	k = getchar();
	printf("What you just entered, dude, is: %c%c%c%c. \nMshenzi wewe!!\n", f,u,c,k);
	return 0;
}
