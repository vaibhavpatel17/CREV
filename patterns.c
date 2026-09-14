#include<stdio.h>
int main(){
    int row;
    int columns;
    for(row=1;row<=5;row++){
        for(columns=1;columns<=row;columns++){
            printf("*");
        }
        printf("\n");  //after printing *in each row go to the next row 
    }
    
    return 0;
}