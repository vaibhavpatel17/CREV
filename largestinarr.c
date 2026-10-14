#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[6]={12,45,7,89,34,56};
    int largest=arr[0];
    int second_largest=0;
    for(int i=0;i<6;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
                }
        if(arr[i]>second_largest && arr[i]<largest){
            second_largest=arr[i];
        }
    }
    
    printf("%d\n",largest);
    printf("%d\n",second_largest);
    return 0;
}