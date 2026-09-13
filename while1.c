#include<stdio.h>
int main(){
    int i=1;
    while (i<=10){
        if(i==5){
            i++;
            continue;//this statement makes the code to go back the begining of the while loop after doing i--
         }
         printf("%d",i);
         i++;
    }
    return 0;
}