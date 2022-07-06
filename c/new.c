#include<stdio.h>
int main()
{
    int a=5;
    int *b,**c;
    b=&a;
    *c=&b;
    printf("%u\n",&a);
    printf("%u\n",*b);
    printf("%u\n",b);
    printf("%u\n",**c);
    return 0;
}