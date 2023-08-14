#include <stdio.h>
int main(void)
{
	char des[26];
	int i, j;

	for (i = 0; i < 26; i++)
	{
		des[i] = 'A' + i;
	}

	for (j = 0; j < 26; j++)
	{
		printf("%c ", des[j]);
	}
	putchar(10);

	return 0;
}
