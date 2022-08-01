#include <stdio.h>
#include <math.h>

int main(){
    for(int i=1;i<=9;i++){
        
        if(i<=5){
            
            for(int j=1;j<=i;j++){
            printf("%d",j);
            }
            for(int k=i-1;k>=1;k--){
                printf("%d",k);
            }
            printf("\n");
        }
        else{
            for(int j=1;j<=10-i;j++){
            printf("%d",j);
            }
            for(int k=10-i-1;k>=1;k--){
                printf("%d",k);
            }
            printf("\n");
        }
            


        }
}   