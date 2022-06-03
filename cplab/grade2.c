#include<stdio.h>
int main()
{
    int marks;
    printf("\nATTREYEE MUKHERJEE\n D2B\n ROLL NO.31\n");
    printf("Enter your marks ");
    scanf("%d",&marks);
    int a=marks/10;
    switch(a){
        case 10:
        case 9:
        printf("Grade A+\n");
        break;
        case 8:
        printf("Grade A\n");
        break;
        case 7:
        printf("Grade B\n");
        break;
        case 6:
        printf("Grade C\n");
        break;
        case 5:
        printf("Grade D\n");
        break;
        case 4:
        case 3:
        case 2:
        case 1:
        printf("Grade F\n");
        break;
        default:
        printf("Wrong Entry\n");

    }
    
}
		
