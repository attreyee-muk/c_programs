#include <stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        for(int j=0;j<=i-1;j++){
            printf("%c",(char)(j+65));
            
        }
        
        printf("\n");
        
        
    }
}