#include<stdio.h>
int main(void)
{
	int j = 'a';
	char array[20] = {0};
	for (int i = 0; i < 19; i++)
	{
			array[i] = j;
			j++;
	}

	printf("%s\n", array);

	return 0;
}
