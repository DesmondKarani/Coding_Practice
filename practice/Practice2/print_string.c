#include <unistd.h>
#include "main.h"
/**
 * print_string - A helper function to print a string.
 * Return: Does not return anything.
 */
void print_string(char *strn)
{
	/* This will be essential in determining string length */
	int length = 0;

	/* Iterate to check string length before NULL terminator */
	while (strn[length] != '\0')
		length++;

	/* Write the string */
	write(1, strn, length);
}
