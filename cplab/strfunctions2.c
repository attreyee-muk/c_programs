#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    printf("enter a string\n");
    scanf("%s",s1);
    printf("enter another string\n");
    scanf("%s",s2);
    strcat(s1,s2);
    printf("%s\n",s1);
    int len=strlen(s1);
    printf("the length of the concatenated string is%d\n",len);
}