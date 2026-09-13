    #include<stdio.h>
    int main(){
        int i;
        for(i=1;i<=30;i++){
            if(i==10){
                continue;
            }
            if(i%2==0||i%5==0){
                 printf("%d",i);
            }
            
            
            
            if(i==25){
                break;
            }
        }
        
        return 0;
        }