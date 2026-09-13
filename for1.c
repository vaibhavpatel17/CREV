#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=20;i++){
        if(i%3==0){  // i is divisible by 3 with no remainder 
            continue;
        }
        printf("%d\n",i);
    }
}
