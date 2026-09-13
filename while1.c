#include<stdio.h>
int main(){
    int i=20;
    while (i>=2){
        if(i==10){
            i--;
            continue;//this statement makes the code to go back the begining of the while loop after doing i--
         }
         printf("%d",i);
         i--;
    }
    return 0;
}