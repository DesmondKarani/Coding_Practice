#include <unistd.h>
#include "main.h"
/**
 * print_percent - A function to print percent character.
 * Return: Does not return anything.
 */
void print_percent()
{
	write(1, "%", 1);
}
