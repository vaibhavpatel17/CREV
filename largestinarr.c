#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5]={12,45,7,89,34};
    int largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("%d\n",largest);
    return 0;
}