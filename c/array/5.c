#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } 
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}