// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main(){
    char x[20];
   
    printf("enter string:");
    gets(x);
    int n=strlen(x);
    
    char y[20];
    y[n]='\0';
    for(int i=n-1;i>=0;i--){
        y[n-1-i]=x[i];
    }
    if(strcmp(x,y)==0){
        printf("palindrome");
    }
    else{
        printf("not a palindrome ");
    }

}
