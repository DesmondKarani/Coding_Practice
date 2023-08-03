#include<stdio.h>

int main(void)
{
    int G, T, h;
    T = 54;  // The ASCII value for '6' character
    h = 55;  // The ASCII value for '7' character
    G = ' ';
    printf("Please enter anything on your keyboard 😁:\n");
    while (G != T)
    {
        G = getchar();
        putchar(G);
	putchar(10);
        if (G == h)
        {
            printf("Ooops, not yet, almost got yah! Next!!!\n");
        }
    }
    printf("You guessed right buddy, NEXT TIMEEEE... MWAHAHAHAHAHAH!!!\n");
    return 0;
}
