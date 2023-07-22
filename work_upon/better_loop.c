#include <stdio.h>

/**
 * main - program to check whether someone attended class
 *
 * Return: 0 always success
 */
int main(void)
{
    char answer;

    do {
        printf("Did you attend classes yesterday sir? (Y/N)\n");
        // Note: The whitespace in the format string tells scanf to skip any whitespace, 
        // including the newline from the previous input
        scanf(" %c", &answer);

        if ((answer == 'Y') || (answer == 'N'))
        {
            if (answer == 'Y')
            {
                printf("Then, mofo, I am sure you're aware of pointers, no??\n");
            }
            else
            {
                printf("How the f..., Like, dude??? F..k!!\n");
            }
        }
        else
        {
            printf("You did not enter the correct input. I fucking clearly said Y or N, JEEZZ!!\n");
        }
    } while (answer != 'Y' && answer != 'N'); // repeat until a valid answer is given

    return 0;
}
