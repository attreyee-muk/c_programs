#include <stdio.h>
int main(){
    int k=5;
    for (int i=1;i<=4;i++){
        for(int j=0;j<=i-1;j++){
            printf("%d",j+i);
        }
        for (int k=i+1;k>2;k--){
            printf("%d",k);
        }
        printf("\n");
        
        
    }
}