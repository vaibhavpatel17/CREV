#include<stdio.h>
int main(){
    int a=10; int b=20;int div;int division;
    //printf("%d %d",a>b&&b>30);// we are not supposed to give two format specifiers cuz we are printing only one reuslt
    //%d depends onthe number of values we are printing not the the values which are involved in the operayion
    printf("%d\n",30 > b && b > a);//should give 0 OR 1
    div=a%b;//gives the remiander 
    division=a/b;//this gives quotient but whether it will be a whole number or decimal number will be depending on the data we assign to the varibales
    // here since both a and b are integer DATA TYPE , WE GET QUOTIENT IN THE FORM OF WHOLE NUMBER 
    float c=20;int d=10;  
    float divs=d/c; //we need float here cuz we have c=float and hence C will convert D also too float hence we need the result to be stored in float too
    printf("%f\n",divs);//should give qoutient in the form of decimal

    printf("%d\n",div);
    return 0;
}