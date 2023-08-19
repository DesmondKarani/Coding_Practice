#include <stdio.h>
int main(void)
{
        int choice;
        float a, b, result;

        printf("0 = Addition, 1 = Substraction, 2 = Multiplication, 3 = Division, 4 = Modulus\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        printf("\nPlease enter the numbers for the operation: ");
        scanf("%d %d", &a, &b);

        switch(choice)
        {
                case 0:
                        result = a + b;
                        break;

                case 1:
                        result = a - b;
                        break;

                case 2:
                        result = a * b;
                        break;

                case 3:
                        result = a / b;
                        break;

                case 4:
                        result = (float)((int)a % (int)b);
                        break;


        }

        printf("The answer is %.3f\n", result);

        return 0;


}
