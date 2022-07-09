#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,pos;
    scanf("%d",&n);
    scanf("%d",&pos);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = pos; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}