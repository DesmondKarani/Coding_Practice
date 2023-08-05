#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{/*
	printf("argc c, which means the number of commands in an argument, is: %d\n", argc);
	printf("argv, which is the array with the actual arguments, is: %s\n", argv[0]);
	printf("The second command in argv array is: %s\n", argv[1]);
	printf("The third command in argv array is: %s\n", argv[2]);
	printf("The fourth command in argv array is: %s\n", argv[3]);
*/
//	int i;

//	for (i = 1; i < argc; i++)
//		printf("%s ", argv[i]);
//	putchar(10);

//	return 0;
	//printf("%s\n", argv[0]);
	//printf("%d\n", argc - 1);

	//int i;
	//for (i = 1; i < argc; i++)
	//	printf("%s\n", argv[i]);
	//return 0;
	int i;
	int count = 0;
	
	for (i = 1; i < argc; i++)
		count = count + atoi(argv[i]);


		printf("The added numbers are %d\n", count);
	return 0;

	/*if (argc == 3)
	{
		printf("Multiplying the two give %d\n", p);
		return 0;
	}

	else
	{
		printf("error my dear, bye\n");
		return 1;
	}*/

}
