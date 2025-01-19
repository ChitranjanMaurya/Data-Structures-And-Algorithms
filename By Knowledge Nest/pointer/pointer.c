#include<stdio.h>
#include<conio.h>

void main(){

    int a=234;
    int *ptr;
    ptr=&a;

    float b=1.1;
    float *floatptr;
    floatptr=&b;

    char c ='a';
    char *charptr;
    charptr=&c;

    printf("values inside pointer variables \n %d \n %d \n %d \n", ptr,floatptr,charptr);

    printf("Actual Values \n %d \n %f \n %c \n",*ptr,*floatptr,*charptr);

    getch();
}