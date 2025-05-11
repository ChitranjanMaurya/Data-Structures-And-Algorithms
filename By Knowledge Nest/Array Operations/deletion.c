/* Insertion at the given index of an Array. */
#include<stdio.h>
#define MAX 5
int main(){
    int array[MAX] = {11,1,13,14,15};
    int position =3;
    int N=5; // total no. of elements

    // Print Array before Deletion
    printf("Printing Array before Deletion \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    //Now arrange rest elements
    for(int i=position;i<N;i++){
        array[i-1] = array[i];
    }

    /* now array is having 4 elements so decrease the value of N */
    N--;

    // Print elements of the Array 
    printf("Printing Array after Deletion \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    return 0;
}