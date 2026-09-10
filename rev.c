#include<stdio.h>
int main(){
   int age;
   char name;
   char grade;
   char op;
   int marks;
   int div;
   int division;
printf("enter name age grade and div of your ward:");
scanf("%d,%c,%c%c,%d",&age,&name,&grade,&op,&marks);
printf("the  %d %c %c%c %d\n",age,name,grade,op,marks);// we'll learn to store our store multiple charcters as one string   using character array and strings later
div=marks/age;
division=marks%age;
printf("the divsion is =%d\n",div);//this is the integer division ignores the decimal part
printf("the div is =%d",division);//this leaves the remainder
return 0;
}
