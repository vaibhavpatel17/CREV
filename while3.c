#include<stdio.h>
int main(){
   int i=0;
   while(i<=50){
    i++;
    if(i%2==0){
           if(i%4==0){
            continue;
        }
        if(i==30){
            break;
        }
          printf("%d",i);
   }
}
return 0;
}