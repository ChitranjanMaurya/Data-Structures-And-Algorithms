#include<stdio.h>
int main(){
    int var1=0,var2=0;
    const int *const ptr = &var1;

   // *ptr=1; value can't be changed
  //  ptr = &var2; also address

    printf("%d \n", *ptr);
    printf("%d \n", ptr);
}