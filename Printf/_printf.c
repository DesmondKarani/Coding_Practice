#include "main.h"

/**
 * _printf - Our custom printf function.
 * @format: Format string with specifiers.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    /* Loop through the format string */
    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%'))
        {
            format++;
	    /* The above moves format to the specifier */

            switch (*format)
            {
                case 'c':
                    count += print_char(args);
                    break;
                case 's':
                    count += print_string(args);
                    break;
                case '%':
                    count += print_percent();
                    break;
            }
            format++;
	    /* This moves format past the specifier */
        }
        else
        {
            write(1, format, 1);
            count++;
            format++;
        }
    }

    va_end(args);
    return count;
}
