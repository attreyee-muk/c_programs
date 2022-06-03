#include <stdio.h>
int main(){
    int sum=0,n,r,org;
    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    printf("enter a number:");

    scanf("%d",&n);
    org=n;
    while (n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (sum==org){
        printf("number is a palindrome\n");

    }
    else{
        printf("number is not a palindrome\n");
    }
    
    
    
}