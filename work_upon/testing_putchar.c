#include <stdio.h>
#include <unistd.h>
int _putchar(char c);

int main(void)
{
	char h = 'D';

	_putchar(h);
	putchar(10);

	printf("By the way, girls really like that letter 😋\n");

	return 0;
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
