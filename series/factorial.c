#include <stdio.h>
int main(){
    int n;
    n=4;
    int x=1;
    int j=1;
    for(int i=3;i<=2*n-1;i+=2){
        j=j*(i)*(i-1);
        x=x+j;
    }
    printf("%d",x);
}