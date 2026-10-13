#include<stdio.h>
int main(){
    int sum=0;
    float avg=0;
    int arr[5]={10,20,30,40,50};
    for (int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    avg=(float)sum/5; //(float) converts sum to a floating point value before division
    printf("%.2f\n",avg);
    return 0;
}