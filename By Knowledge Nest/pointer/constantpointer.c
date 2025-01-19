#include<stdio.h>
int main(){
    int var1=0, var2=0;
    int *const ptr = &var1;
   // ptr = &var2; address can't be changed
   *ptr=5;  //value can be changed

    printf("%d \n", *ptr);

    return 0;
}