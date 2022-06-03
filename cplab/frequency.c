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
    int max=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            max=a[i-1];
        }

    }
    printf("The largest element in the array is %d\n",max);
}