#include<stdio.h>
int main(){
    int rows;
    int columns;
    for(rows=3;rows>=0;rows--){
        for(columns=1;columns<=6;columns++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}