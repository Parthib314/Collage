#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int **arr;
    arr=(int**)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i]=(int*)malloc(m*sizeof(int));
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
        printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}