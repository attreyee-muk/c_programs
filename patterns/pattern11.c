#include <stdio.h>
int main(){
    int k=5;
    for (int i=1;i<=5;i++){
        for(int k=0;k<=i-2;k++){
            printf(" ");
        }
        for(int j=1;j<=5-i;j++){
            printf("%c",(char)(j+64));
        }
        
        printf("\n");
        
        
    }
}