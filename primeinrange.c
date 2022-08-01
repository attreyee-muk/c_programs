#include <stdio.h>
int main(){
    int a=100;
    int b=300,i;
    while (a<=b){
        i=2;
        while(a%i!=0){
            i++;
        }
        if(a==i){
            printf("%d\n",a);
        }
        a++;
    }
}