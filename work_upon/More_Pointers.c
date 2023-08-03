#include <stdio.h>
/**
 * main - program meant to help improve comprehension of pointers.
 *
 * Return: 0 will be a successful program run.
 */
int main(void)
{
	/*Here I am declaring variables and pointer variables*/
	char g = 'j';
	long int h = 200;
	char *k = &g;
	long int *desi = &h;

	/*Here I am printing the addresses the pointers are poininting to*/
	printf("I have two pointer addresses, %p and %p\n", k, desi);

	/*Here I am dereferencing the pointers to show their actual values*/
	printf("The value stored in these pointer variables are %c and %ld\n", *k, *desi);
	
	return (0);
}

/*What I have learned:

When you pass a variable to a function in C, the function works on a copy of that variable, not the original one.
Any changes it makes to the copy do not affect the original variable. In my analogy, this would be "skin deep".

However, when you pass a pointer to a function, the function can dereference the pointer to access and modify the original variable directly.
In my analogy, this would be "changing it to the heart".

This is a key reason why pointers are so important in C: they give you direct access to memory,
which allows you to create more efficient and flexible programs.
However, with this power comes responsibility, as incorrect usage of pointers can lead to bugs that are difficult to diagnose and fix,
such as segmentation faults or memory leaks. 
It's important to understand how pointers work and use them carefully.
*/
