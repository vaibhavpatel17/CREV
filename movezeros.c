#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[7]={0,1,0,3,12,0,5};
    int k=0;
    int temp[7]={};
    for(int i=0;i<7;i++)
    {
        if(arr[i]!=0)
        {
            temp[k]=arr[i];
            k++;
        }
    }
    for(int k=0;k<7;k++){
    printf("%d\n",temp[k]);
    }
    return 0;
}