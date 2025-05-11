/* Program to calculate sum and average  */
#include<stdio.h>

int main(){
    int arr[10];
    int n;
    int sum=0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("\nEnter the number %d :",i+1);
        scanf("%d",&arr[i]);

        sum += arr[i];
    }
    printf("The sum of numbers is: %d", sum);

    average = sum/n;
    printf("The average is : %f", average);

    return 0;
}