#include <stdio.h>
void reverse_array(int *a, int n);
int main(void)
{
    int array[7] = {7,6,5,4,3,2,1};
    reverse_array(array, 7);
    
    for (int r = 0; r <= 6; r++)
    printf("%d ", array[r]);
    return 0;
}

void reverse_array(int *a, int n)
{
    int *des = a; // Assign pointer variable 'des' to the first element of the array. 
    //In C, when an array is used as a pointer, it points to its first element.
    
    int *sed = a + n -1; // Here, we assign 'sed' to point to the last element of the array.
    //Since arrays are zero-indexed, the last element is at the index equal to the length of the array minus one.
    
    while (des <= sed)
    { 
        // Here, we are swapping the elements at the positions pointed by 'des' and 'sed'.
        // We first store the value at 'des' in 'hand', then overwrite the value at 'des' with the value at 'sed'.
        // Finally, we put the originally stored value (which was at 'des') into 'sed'.
        int hand = *des; 
        *des = *sed;
        *sed = hand;
        
        // Here, we move the pointers towards each other: 'sed' towards the beginning and 'des' towards the end.
        // We use 'sed' and 'des' instead of '*sed' and '*des' because 
	// we want to change where the pointers point, not the values they point to.
        sed--;
        des++;
        
    }
    
}

