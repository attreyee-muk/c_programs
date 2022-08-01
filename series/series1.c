#include <stdio.h>
int main(){
    float x;
    int n;
    int j=0;
    x=0.0;
    n=3;
    for(int i=1,j=1;i<=n;i++,j=j+2){
        x=x+(float)(j)/(j+1);
    }
    printf("%f",x);
}