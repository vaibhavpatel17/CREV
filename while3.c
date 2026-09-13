    #include<stdio.h>
    int main(){
        int i;
        for (i=1;i<=20;i++){
            if(i%3==0){
                continue;
            }
            if(i==17){
                break;
            }
        printf("%d",i);
        }
        return 0;
    }