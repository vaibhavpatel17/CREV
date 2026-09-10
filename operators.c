#include<stdio.h>
int main(){
    int a=10; int b=20;
    //printf("%d %d",a>b&&b>30);// we are not supposed to give two format specifiers cuz we are printing only one reuslt
    //%d depends onthe number of values we are printing not the the values which are involved in the operayion
    printf("%d\n",30 > b && b > a);
    return 0;
}