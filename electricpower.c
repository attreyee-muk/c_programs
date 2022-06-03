#include <stdio.h>
int main(){
    int units;
    float charge;
    scanf("%d",&units);
    switch (units/200){
        case 0: charge=0.50*units;
        break;
        case 1: charge=100+(units-200)*0.65;
        break;
        case 2: charge=230+(units-400)*0.85;
        break;
        default: charge=390+(units-600);
        break;
    }
    printf("%f",charge);

}