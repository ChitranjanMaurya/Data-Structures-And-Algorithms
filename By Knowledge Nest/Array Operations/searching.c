/* Searching an element in an Array. */
#include<stdio.h>
#define MAX 5
int main(){
    int array[MAX] = {11,1,13,14,15};
    int item = 15;
    int N=5; // total no. of elements

    // Print Array 
    printf("Printing Array \n");
    for(int i=0;i<N;i++){
        printf("array[%d] = %d\n",i,array[i]);
    }
    // Searching
    int j=0;
    while(j<N){
        if(array[j]==item)
        break;
        j++;
    }
    if(j==N)
     printf("Element %d not found",item);
     else
      printf("Found Element %d at position %d",item,j+1);
    
    return 0;
}