#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("Not Prime");
    }else{
        int c=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                c=1;
            }
        }
        if(c==1){
            printf("Not Prime");
        }else{
            printf("Prime");
        }
    }
    return 0;
}