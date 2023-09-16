#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @d: The character to print.
 */
void print_char(char d)
{
    write(1, &d, 1);
}

/**
 * print_string - Prints a string.
 * @strn: The string to print.
 */
void print_string(const char *strn)
{
    int length = 0;

    while (strn[length] != '\0')
        length++;
    write(1, strn, length);
}

/**
 * print_percent - Prints a percent character.
 */
void print_percent(void)
{
    write(1, "%", 1);
}

/**
 * custom_print - Custom function to print formatted data.
 * @format: Format string.
 */
void custom_print(const char *format, ...)
{
    va_list args;
    char c;
    char *s;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    c = va_arg(args, int); /* char is promoted to int */
                    print_char(c);
                    break;
                case 's':
                    s = va_arg(args, char*);
                    print_string(s);
                    break;
                case '%':
                    print_percent();
                    break;
                default:
                    write(1, format, 1);
            }
        }
        else
            write(1, format, 1);
        format++;
    }
    va_end(args);
}

/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
    custom_print("Character: %c\nString: %s\n integer : %d\n Percent: %%", 'A', "Hello", 2);
    return (0);
}
