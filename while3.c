    #include<stdio.h>
    int main(){
        int i=0;
      while(i<=30){
        i++;
        if(i%2==0){
            continue;
        }
        if(i==15){
            continue;
        }
        if(i==25){
            break;
        }
        printf("%d",i);
      }
      return 0;
    }