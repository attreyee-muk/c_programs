#include <stdio.h>
int main(){
    int k=65;
    for(int i=1;i<=5;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
            printf("%c",(char)(k++));
        }
        }
        else{
            for(int j=i,k=k+1;j>=1;j++){
            printf("%c",(char)(k++)); 
        }

        }
        
        printf("\n");
    }
    }
