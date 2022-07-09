#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    arr[3]=56;
    // for(int i=0;i<5;i++){
    //     printf("%d  ",arr[i]);
    // }
    for(int i=2;i<4;i++){
       arr[i]=arr[i+1];
    }
    for(int i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}