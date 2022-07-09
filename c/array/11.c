#include<stdio.h>
int main(){
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[3][3]={
        {7,8,9},
        {4,5,6},
        {1,2,3}
    };
    int mul[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=0;
            for(int k=0;k<3;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++){
        printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}