#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[6]={10,25,30,45,50,65};
    int key;
    int found=0;
    printf("enter the number to search:\n");
    scanf("%d",&key);
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            found=1;
            printf("element %d found at position %d\n",key,i+1);   
        }
    }
    if(found==0){
        printf("element not found\n");
    }
    return 0;
}