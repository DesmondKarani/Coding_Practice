#include "main.h"

/**
 * print_string - Prints a string.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char*);
    int count = 0;

    while (*str)
    {
        write(1, str, 1);
        count++;
        str++;
    }
    return count;
}
