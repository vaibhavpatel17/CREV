#include<stdio.h>
int main(){
    int i=1;
    while(i<=50){
        i++;
        if(i%3==0){
            if(i==21){
                continue;
            }
            if(i==42){
                break;
            }
            printf("%d",i);
            
        }
    }
    return 0;
}
