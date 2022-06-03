#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    
    printf("First number after swapping is: %d\n",a);
    printf("Second number after swapping is: %d\n",b);

    
}