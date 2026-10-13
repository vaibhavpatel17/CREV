#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[8]={10,20,10,30,10,40,20,50};
    int count=0;
    int key;
    printf("enter the number:\n");
    scanf("%d",&key);
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count==0){
        printf("element not found\n");
    }
    printf("%d\n",count);
    return 0;
}