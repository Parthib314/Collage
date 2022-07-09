#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pos,val;
    scanf("%d",&pos);
    scanf("%d",&val);
    int *arr;
    arr=(int*)malloc(100*sizeof(int));
    for (int i = 0; i < 100; i++)
    {
        arr[i]=0;
    }
    arr[pos]=val;
    for (int i = 0; i < 100; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}