#include <stdio.h>
int main(void)
{
	char grade;
	scanf("%c", &grade);

	switch (grade)
	{
		case 'A':
			printf("smart dude, very smart, wow!\n");
			break;

			case 'B':
                        printf("smart dude, wow!\n");
                        break;

			case 'C':
                        printf("smart!\n");
                        break;

			case 'D':
                        printf("Dissapointing!\n");
                        break;

			case 'E':
                        printf("Have you been studying?!\n");
                        break;

			case 'F':
                        printf("What the?\?!\n");
                        break;

			default:
				printf("INVaLID!!!!!");
			break;
	}

	/*if (grade == 'A')
		printf("Wow, great dude, you passed\n");
	
	else if (grade == 'B')
                printf("Great dude, you passed\n");
	
	else if (grade == 'C')
                printf("Dude, you passed\n");
	
	else if (grade == 'D')
                printf("Please try harder\n");
	
	else if (grade == 'E')
                printf("Unacceptable\n");
	
	else if (grade == 'F')
                printf("FAILURE!\n");
	
	else
		printf("Invalid\n");*/

	return 0;
}
