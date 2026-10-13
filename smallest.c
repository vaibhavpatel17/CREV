#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5]={12,45,7,89,34};
    int smallest=arr[0];
    for (int i=0;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("%d\n",smallest);
    return 0;
}