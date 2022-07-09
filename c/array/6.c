#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,val;
    scanf("%d",&n);
    scanf("%d",&val);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==val){
            printf("%p",&arr[i]);
        }
    }
    
    return 0;
}