    #include<stdio.h>
    int main(){
        int age,hasID;
        printf("enter age");
        scanf("%d",&age);
        if(age>=18){
            printf("enter ID\n");
            scanf("%d",&hasID);
            if(hasID==1){
                printf("entry allowed\n");
            }
            else{
                printf("ID required\n");
            }
        }
            else{
                printf("entry denied\n");
            }
        }