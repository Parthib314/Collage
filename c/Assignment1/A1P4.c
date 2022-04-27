#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter 1st num:");
    scanf("%d",&a);
    printf("Enter 2nd num:");
    scanf("%d",&b);
    printf("Operator: ");
    scanf(" %c",&c);
    if(c=='+'){
        printf("Sum is %d",a+b);
    }else if(c=='-'){
        printf("Difference is %d",a-b);
    }else if(c=='*'){
        printf("Multiplication is %d",a*b);
    }else if(c=='/'){
        if (b==0){
            printf("Undifined");
        }else{
        printf("Divide is %d",a/b);
        }
    }else{
        printf("Invalid input");
    }
    return 0;
}