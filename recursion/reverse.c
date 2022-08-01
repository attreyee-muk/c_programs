#include <stdio.h>
 int sum=0;
 int num(int n){
     int r=n%10;
     if(n==0){
         return sum;
     }
     sum=(sum*10)+r;
     return num(n/10);
 }
 void main(){
     int ans, number;
     printf("enter\n");
     scanf("%d\n",&number);
     ans=num(number);
     printf("%d",ans);
 }
 