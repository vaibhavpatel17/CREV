#include<stdio.h>
int main(){
    int marks,i;
   
    for(i=0;i<6;i++){
         printf("enter the marks of the student:\n");
        scanf("%d",&marks);
    if (marks>=90){
        printf("A\n");
    }
    else if (marks<=89 && marks>=80){   // we cant just put marks<89 for B cuz once the C finds a true condition it skips the remaining else if conditions 
        printf("B\n");
    }
    else if (marks>=70){
        printf("C");
    }
    else if(marks>100 || marks<0){
        printf("enter valid marks");
    }
    else{
        printf("F");
    }
}
    return 0;
}