/* Program to store temperature of two cities of a week and display it. */
#include<stdio.h>
const int CITY=2;
const int WEEK=7;

int main(){

    int temperature[CITY][WEEK];
    printf("Enter the temperature of\n");

    for(int i=0; i<CITY;i++){
        for(int j=0; j<WEEK;j++){
            printf("City %d Week %d ",i+1,j+1);
            scanf("%d",&temperature[i][j]);
        }
    }
    printf("Displaying values\n");
    for(int i=0; i<CITY;i++){
        for(int j=0; j<WEEK;j++){
            printf("City %d Week %d, Temperature is: %d\n",i+1,j+1,temperature[i][j]);
        }
    }    

    return 0;
}