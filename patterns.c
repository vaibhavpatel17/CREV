#include<stdio.h>
int main(){
    int rows;
    int columns;
    for(rows=5;rows>=0;rows--){
        for(columns=0;columns<rows;columns++){
            printf("%d",6-rows+columns);
        }
        printf("\n");
    }
    return 0;
}