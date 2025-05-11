/* Program to take 5 input from user and store them in an array  */
#include<stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 integer number: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }

    printf("The entered integers are: ");
    for(int i=0; i<5; i++){
        printf("\t%d",arr[i]);
    }
    return 0;
}