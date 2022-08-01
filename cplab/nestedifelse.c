#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    if(a%2==0){
        if(a<1000){
            printf("The number is even and is less than 1000\n");

        }
        else{
            printf("The number is even and is greater than 1000\n");
        }
        

    }
    else{
        if(a>1000){
            printf("The number is odd and is greater than 1000\n");

        }
        else{
            printf("The number is odd and is less than 1000\n");
        }
    }

    
}