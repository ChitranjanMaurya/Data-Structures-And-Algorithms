/* Updating element value present in an Array. */
#include<stdio.h>
int main(){
    int array[] = {11,1,13,14,9};
    int N=5; // total no. of elements
    int item = 10;
    int position = 3;

    // Print Array before Updation
    printf("Printing Array before Updation \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    //Now update value
    array[position-1] = item;
    
    // Print Array after Updation
    printf("Printing Array after Updation \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    return 0;
}