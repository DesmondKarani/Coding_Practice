#include <stdio.h>

int main() 
{
	int size = 10; // Define the size of the square

	for(int i=0; i<size; i++) 
	{ // Loop for each row
		
		for(int j=0; j<size; j++) 
		{ // Loop for each column
			
			if(i==0 || i==size-1 || j==0 || j==size-1) 
			{
				printf("*"); // Print star at the borders
			} else 
			{
				printf(" "); // Print space in the center
			}
		}
		printf("\n"); // Go to next line after each row
	}
	
	return 0;
}
