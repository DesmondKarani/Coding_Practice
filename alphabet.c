#include <stdio.h>
int main(void)
{
	char d = 'A';
	char c = 'Z';

	while (d <= c)
	{
		putchar(d);
		d++;
	}
	putchar(10);
	
	return 0;
}
