#include<stdio.h>
int main()
{
    int a=5,b=7,min;
    if(a<b){
        min=a;
    }else{
        min=b;
    }
    while(min>0){
        if(a%min==0 && b%min==0){
            printf("%d",min);
            break;
        }
        min--;
    }
    return 0;
}