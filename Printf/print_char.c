#include "main.h"

/**
 * print_char - Prints a character.
 * @args: Argument list.
 * Return: Number of characters printed.
 */
int print_char(va_list args)
{

    /* Get the character from the argument list */
    char c = va_arg(args, int);
    write(1, &c, 1);
    return 1;
}
