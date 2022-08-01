// Online C compiler to run C program online
#include <stdio.h>


int main()
{
for(int i=0;i<4;i++){
    for(int j=3;j>=i;j--){
        printf(" ");
    }
    for(int k=0;k<i+1;k++){
        printf("%d",k+1);
    }
    for(int m=0;m<i;m++){
        printf("%c",m+65);
    }
    printf("\n");
}

}