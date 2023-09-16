#include <unistd.h>
void print_char(char d)
{
	write(1, &d, 1);
}
void print_string(const char *strn)
{
	int length = 0;

	while (strn[length] != '\0')
		length++;

	write(1, strn, length);
}
void print_percent(void)
{
	write(1, "%", 1);
}
int main(void)
{
	print_char('A');
	print_char('S');
	print_char('U');
	print_char('M');
	print_char('A');
	print_char(' ');
	print_char('P');
	print_char('\n');
	
	print_string("Desmond");
	print_char('\n');
	print_percent();
}
