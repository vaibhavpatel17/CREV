#include<stdio.h>
int main(){
    int row;
    int columns;
    for(row=5;row>=0;row--){
        for(columns=1;columns<=row;columns++){
            printf("*");
        }
        printf("\n");   
    }
    return 0;
}