#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char movie[30];

	printf("what's you favorite movie? I will print this in CAPS fyi 😁\n");
	fgets(movie, sizeof(movie), stdin);

	for (int i = 0; movie[i]; i++)
	{
		movie[i] = toupper(movie[i]);
	}
	printf("Wow!!! So you like %s???\n", movie);

	return 0;
}	
