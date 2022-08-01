#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    printf("enter a string\n");
    scanf("%s",s1);
    printf("enter another string\n");
    scanf("%s",s2);
    strcpy(s1,s2);
    char a[10]="abc";
    char b[10]="def";
    int res=strcmp(a,b);
    printf("first string after copying is %s\n",s1);
    printf("the integer returned after using strcmp() is %d\n",res);
}