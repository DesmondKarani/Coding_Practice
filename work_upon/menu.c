#include <stdio.h>
int main(void)
{
	int choices;

	printf("Utaenda kuona the Room kesho Sato?\n");

	while (1)
	{
		printf("1. Ati?\n");
		printf("2. Sikupata mail\n");
		printf("3. Zi\n");
		printf("4. Ehh, nitaenda\n");
		scanf("%d", &choices);

		switch(choices)
		{
			case 1:
				printf("Unaenda Room keshooo???\n");
				break;
			case 2:
                                printf("Basi you never passed exams\n");
				break;
			case 3:
				printf("Kwanini??\n");
				break;
			case 4:
				printf("Unaenda Room keshooo???\n");
				break;
				
				default:
				printf("invalid\n");
		}

		if (choices >= 1 && choices <= 4)
			break;
	}

	return 0;
}
