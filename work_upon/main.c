#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void more_numbers(void);

int main(void)
{
	more_numbers();
	return (0);
}

void more_numbers(void)
{
    int a, b;

    for (a = 0; a < 10; a++)
    {
        for (b = 0; b <= 14; b++)
        {
            if (b >= 10)
                _putchar(b / 10 + '0');
            _putchar(b % 10 + '0');
        }
        _putchar('\n');
    }
}
