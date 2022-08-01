#include <stdio.h>
#include <math.h>

int main(){
    int angle;
    scanf("%d",&angle);
    angle=(angle*3.14)/180;
    int pow,n,j=1;
    scanf("%d",&n);
    float answer=0.0;
    for(int i=1;i<=n;i++){
        j=j*i;

        answer=answer+((((-1)^i)*(angle^i))/j);

    }
    printf("%f",answer);

    
}