#include <stdio.h>
#include <string.h>
int b[32];
int digit;
void binary(int a){
    for (int i=0;i<32;i++){
        digit=a%2;
        a=a/2;
        b[i]=digit;
    }
    printf("The binary representation of the number in 32 bits is:");
    for (int j=32;j>=0;j--){
        printf("%d",b[j]);
    }
    
}
int main()
{
    printf("ATTREYEE MUKHERJEE D2B 31\n");
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    binary(num);
}



