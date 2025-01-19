#include<stdio.h>
int main(){
    int var1=0,var2=5;
    const int *ptr=&var1; //same int const *ptr;
    //*ptr=1; value can't be changed
    printf("%d \n",ptr);
    ptr=&var2; // address can be changed

    printf("%d \n", *ptr);
    printf("%d \n", ptr);

}