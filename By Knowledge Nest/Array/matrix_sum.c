#include<stdio.h>

int main(){
    int a[2][2];
    int b[2][2];
    int result[2][2];

    printf("Enter elements of 1st matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter a[%d][%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter b[%d][%d]: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the matrix is: \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){

            result[i][j]=a[i][j] + b[i][j];
            printf("Sum Result[%d][%d]: ",i+1,j+1);
            printf("%d\n",result[i][j]);
        }
    }

    return 0;
}