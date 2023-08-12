#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
        {
                printf("This is a simple calculator, you need to enter two operators and an operand\n");
                return 1;
        }
	//Named as floats to accomodate division of improper fractions.
	//The use of atof functions (supported by stdlib) is to convert arguments to integers.
	//I have used atof instead of atoi since I am working with floats instead of integers.
	float i = atof(argv[1]);
	float j = atof(argv[3]);
	float k;
	
	//Here, I am making sure the user only enters these for math use	
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != 'x' && argv[2][0] != '*' && argv[2][0] != '/')
	{
		printf("Not Allowed Dude!, Need a real operand\n");
		return 1;
	}
	
	if (argv[2][0] == '+')
	{
		k = i + j;
		printf("The sum of %.2f and %.2f is %.2f\n", i, j, k);
	}
	else if (argv[2][0] == '-')
        {
                k = i - j;
                printf("%.2f minus %.2f is %.2f\n", i, j, k);
        }

	//Here, I have added flexibility for either x or *
	//Reason is, in linux, * is intepreted as a wild card, and thus to use it for 
	//multiplication, you need to escape it. Therefore, users can either escape it
	//or use character x.
	 else if (argv[2][0] == 'x' || argv[2][0] == '*')
        {
                k = i * j;
                printf("Multiplying %.2f with %.2f is %.2f\n", i, j, k);
        }

	 //Here, I have used a lot of conditions that need to be met for division application
	 //first, I'm preventing users from dividing a number by zero and vice-versa since that is invalid
	 //second, I have used strcmp function (supported by string.h) to check for 0 input.
	 //strcmp compares two strings. Hence, that's why the zero compare is is " " instead of ' '. 
	 //in the former, 0 is read as a string, while in the latter, it will be read as a character
	 //You can't compare a string with a character.
	 //I had previous included argument 1 as not allowed to be zero but realized that 
	 //you can divide 0 to a non-zero, but not a non-zero to zero.
	 //Also, I should have just said j != 0 but, hey, use strcmp all the way 😂
	  else if (argv[2][0] == '/' && /*strcmp(argv[1], "0") != 0 &&*/ strcmp(argv[3], "0") != 0)
        {
                k = i / j;
                printf("Dividing %.2f with %.2f is %.4f\n", i, j, k);
        }
	   else
        {
                printf("Please enter the right stuff, this is a real, simple calculator🤨🤬\n");
        }
       return 0;	
}
