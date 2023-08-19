#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i;
	float j, g, h;
	i = 1;

	 if (argc < 3)
        {
                printf("Please enter at least two arguments, pleaseee 😋\n");
        return 1;
        }

	j = atof(argv[1]);
	g = atof(argv[2]);
	h = j * g;

	while (1)
	{


	/*printf("The name of the program is %s\n", argv[0]);*/
	printf("The number of arguments passed to me are %d\n", argc - 1);
	printf("These arguments are as follows\n");

	for (; i < argc; i++)
		/*for (j = 1; j < argc; j++)*/
	       printf("%s as argument number %d\n", argv[i], i + 1);

	printf("Oh, by the way, you can even multiply the some arguments\n");
	printf("For example multiplying the second argument with the third argument (assuming you entered digits) is %f 😋\n", h);
	printf("It's not magic, you just convert arguments to floats or integers using atof or atoi with stdlib, like this: f = atof(argv[2]) and buum!!\n");

	return 0;
	}
}
