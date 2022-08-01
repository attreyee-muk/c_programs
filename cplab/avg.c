#include <stdio.h>
#include <string.h>
int main(){
    int a[100];
    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the %d th element of array:",i);
        scanf("%d",&a[i]);
    }
    float sum=0;
    float avg;
    for(int i=0;i<4;i++){
        sum=sum+a[i];
    }
    avg=sum/4;
    printf("%f\n",avg);
}