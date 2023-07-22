#include <stdio.h>
/**
 * main - program to check whether someone attended class
 *
 * Return: 0 always success
 */
int main (void)
{
	char answer;
	printf("Did you attend classes yesterday sir? (Y/N)\n");
	scanf("%c", &answer);

		if ((answer == 'Y') || (answer == 'N'))
		{
			if (answer == 'Y')
			{
				printf("Then, mofo, I am sure you're aware of pointers, no??\n");
			}else
			{
				printf("How the f..., Like, dude??? F..k!!\n");
			}
		}
		else
		{
			printf("you did not enter the correct input. I fucking clearly said Y or N, JEEZZ!!\n");
			scanf("%c", &answer);
			 if (answer == 'Y')
                        {
                                printf("Then, mofo, I am sure you're aware of pointers, no??\n");
                        }else
                        {
                                printf("How the f..., Like, dude??? F..k!!\n");
                        }
		}
}
