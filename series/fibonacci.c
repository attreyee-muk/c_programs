#include <stdio.h>

int main(){
    int a,b,c;
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    //scanf("%d",&m);
    for(int i=1;i<=10;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        
    }
    
    }