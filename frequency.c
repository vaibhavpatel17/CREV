    #include <stdio.h>
    #include <stdlib.h>

    int main() 
    {
        int arr[8] = {4, 2, 4, 7, 2, 4, 9, 7};
        int temp[8]={0};
        for(int i=0;i<8;i++)
        {
            if(temp[i]==1){
                continue;
            }
            int count=0;  // we have moved the count inside the outer loop because  
// when i=1 arr[1]=20 but teh count has already climbed to 3 becasue 10 has appeared 3 times , for i=1 it shows 20 has repeated 5 times 
            for(int j=0;j<8;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    temp[j]=1;
                }
            }
        
        printf("%d appears %d times\n",arr[i],count);
        }
        return 0;
    }