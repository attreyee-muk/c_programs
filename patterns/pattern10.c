#include <stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=5-i;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c ",(char)(i+64));
        }
        printf("\n");

    }
}