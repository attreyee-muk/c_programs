#include <stdio.h>
#include <string.h>
struct employees{
    char name[20],dept[20];
    int age,salary;
};
int main(){
    struct employees emp[6];
    int temp;
    for(int i=0;i<6;i++){
        printf("enter name");
        scanf("%s",emp[i].name);
        printf("enter dept");
        scanf("%s",emp[i].dept);
        printf("enter age");
        scanf("%d",&emp[i].age);
        printf("enter salary");
        scanf("%d",&emp[i].salary);
    }
    for (int j=0;j<5;j++){
        for(int k=0;k-j;k++){
            if (emp[k].salary>emp[k+1].salary){
                emp[k].salary=temp;
                emp[k].salary=emp[k+1].salary;
                emp[k+1].salary=temp;
        }

        } 
    }

}
