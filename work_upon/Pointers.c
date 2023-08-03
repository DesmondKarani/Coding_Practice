#include<stdio.h>
int main(void)
{
	char betel [][2] = {
		{'d', 't'},
		{'w', 'c'},
		{'q', 'x'},
		{'z', 'p'}
	};
	char des = ' ';
	char * pDes = &des;
	printf("Can you please enter any leter?:\n");
	scanf("%c", &des);
	
	printf("What you entered is %c\n", des);
	printf("I thought utatype %c ama %c to be honest. But ni sawa ndugu\n", betel [3][1], betel [2][0]);
	printf("By the way you should know that the memory location for what you entered is %p\n", &des);
	printf("If you need it derefenced, since it is a pointer, it is %c\n", *&des);
	return 0;
}
