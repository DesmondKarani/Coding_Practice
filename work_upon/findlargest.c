#include <stdio.h>
int LargestNumber(int array[], int size);
int main(void)
{
	int Arrays[] = {1, 2, 39, 48, 1634, 3, 4, 5, 6, 7, 8, 9, 10};
	int Arrays1[] = {3, 1098, 49, 21, 1, 90};
	int Arrays2[] = {1000, 2000, 10000, 289991, 291010};

	int Size = sizeof(Arrays) / sizeof(Arrays[0]);
	int Size1 = sizeof(Arrays1) / sizeof(Arrays1[0]);
	int Size2 = sizeof(Arrays2) / sizeof(Arrays2[0]);
	int Kubwa, Kubwa1, Kubwa2;

	Kubwa = LargestNumber(Arrays, Size);
	Kubwa1 = LargestNumber(Arrays1, Size1);
	Kubwa2 = LargestNumber(Arrays2, Size2);

	if (Kubwa > Kubwa1 && Kubwa > Kubwa2)
		printf("Namba kubwa kabisa ni %d\n", Kubwa);

	else if  (Kubwa1 > Kubwa && Kubwa1 > Kubwa2)
                printf("Namba kubwa kabisa ni %d\n", Kubwa1);

	else
		printf("Namba kubwa kabisa ni %d\n", Kubwa2);

	return 0;

}
int LargestNumber(int array[], int size)
{
	int Largest = array[0];
	int i;

	for (i = 1; i < size; i++)
	{
		if (array[i] > Largest)
			Largest = array[i];
	}
	return Largest;
}
