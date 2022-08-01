#include <stdio.h>
int main(){
    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    for(int i=0;i<=3;i++){
        for(int j=3;j>=i;j--){
            printf("* ");
        }
        printf("\n");
        for(int k=0;k<=i;k++){
            printf(" ");
        }
    }
}