#include<stdio.h>
int main(){
   int age;float height;
   printf("enter your age and height");
   scanf("%d,%f",&age,&height);//this is correct only if we enter the inputs separating with commas
   printf("the age and height is %d and %.2f",age,height);
   return 0;
}