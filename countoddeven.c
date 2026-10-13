#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5]={12,45,7,89,34};
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            count_even+=1;
        }
        if(arr[i]%2!=0){
            count_odd+=1;
        }
    }
    printf("%d\n",count_even);
    printf("%d\n",count_odd);
    return 0;
}