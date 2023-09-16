#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - A function to print c, s, and %.
 * @format: This is the parameter to format the arguments.
 */
int _printf(const char *format, ...)
{
	/* Here, we start by listing the arguments to use in the function */
	va_list arguments;
	char f;
	char *strn;

	/**
	 * This will be used to keep count of characters
	 * because helper functions do not return anything.
	 */
	int char_count = 0;

	va_start(arguments, format);

	/* We use this loop to iterate with the parameter known as format */
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			/* Here, after bypassing the %(specifier) iterate
			 * with a switch. 
			 */
			switch (*format)
			{
				case 'c':
					f = va_arg(arguments, int);
					print_char(f);
					char_count++;
					break;
				case 's':
					strn = va_arg(arguments, char*);
					print_string(strn);
					/* counting through the string */
					while (*strn)
					{
						char_count++;
						strn++;
					}
					break;
				case '%':
					print_percent();
					char_count++;
					break;
				default:
					/* print anything else as it is */
					write(1, format, 1);
					char_count++;

			}
		}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}
	va_end(arguments);

	return char_count;
}
