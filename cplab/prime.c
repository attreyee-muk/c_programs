#include <stdio.h>
int main(){
    int i,x,y;
    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    printf("enter lower limit:");
    scanf("%d",&x);
    printf("enter upper limit:");
    scanf("%d",&y);

    while(x<=y){
        x++;
        i=2;
        while(x%i!=0){
            i++;
        }
        if(x==i){
            printf("%d\n",x);
        }
    }
}