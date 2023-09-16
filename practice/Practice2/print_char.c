#include <unistd.h>
#include "main.h"
/**
 * print_char - This is helper function to print a character.
 * Return: Does not return anything.
 */
void print_char(char f)
{
	write(1, &f, 1);
}
