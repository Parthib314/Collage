#include<stdio.h>
int main()
{
    int n;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    if(n>99 && n<1000){
       printf("%d",((n/100)+((n/10)%10)+(n%10)));
    }else{
       printf("Not a three digit number");
    }
    return 0;
} 