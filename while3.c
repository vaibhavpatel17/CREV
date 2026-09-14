#include<stdio.h>
int main()
{
   int i=1;
   while(i>0||i<0){
       printf("enter the number:");
       scanf("%d",&i);
       if(i==0){
      break;
   }
   else if(i>0){
      printf("POSITIVE\n");
   }
    //  continue;  we cannot have selection statements here 
    //ELSE CANNOT COME INSIDE THE else if statement 
      else {
      printf("NEGATIVE\n");
       
      }
   }

return 0;
}