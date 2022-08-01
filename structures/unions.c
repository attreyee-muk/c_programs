#include <stdio.h>
struct abc{
    int a;
    char b;
    float c;
};

int main(){
    struct abc u;
    u.a=1;
    u.b="a";
    u.c=9.2;
    printf("%d\n",u.a);
    printf("%c\n",u.b);
    printf("%f\n",u.c);

}