/* Insertion at the given index of an Array. */
#include<stdio.h>
#define MAX 5
int main(){
    int array[MAX] = {11,1,13,14};
    int index =1;
    int N=4; // total no. of elements
    int newValue = 10;

    // Check if insertion is possible
    if (N >= MAX) {
        printf("Insertion not possible. Array is full.\n");
        return 1;
    }

    // Print Array before Insertion
    printf("Printing Array before Insertion \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    //Now shift rest elements to the right
    for(int i=N-1;i>=index+1;i--){
        array[i+1] = array[i];
    }
    // add new elements at first position
    array[index+1] = newValue;

    /* now array is having 5 elements so increase the value of N */
    N++;

    // Print elements of the Array 
    printf("Printing Array after Insertion \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    return 0;
}