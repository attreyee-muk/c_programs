#include <stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        for(int k=0;k<=i-2;k++){
            printf("%c",(char)(k+65));
        }
        printf("\n");
    }
}