#include <stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("array1");
            printf("type %dth element of the %dth row",j,i);
            scanf("%d",&a[i][j]);
        }
        
    }

    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("array2");
            printf("type %dth element of the %dth row",j,i);
            scanf("%d",&b[i][j]);
        }
        
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                
            }
            printf("%d\n",c[i][j]);
            
        }

}
}