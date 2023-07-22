#include <stdio.h>
int main(void)
{
	for(int i = 0; i < 5; i++)
	{         // Loop for rows
		
		for(int j = 0; j < 5; j++)
		{// Loop for columns
			
			if(i == 0 || i == 4 || j == 0 || j == 4)
			{
				printf("*");
			} else
			{
				printf(" ");
			}
		}
		printf("\n");// Go to next line after each row
	}
}
