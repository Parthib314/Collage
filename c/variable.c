#include<stdio.h>

int a=10;
void fun(){
    int b=20;
    static int c=30;
    a++;
    b++;
    c++;
    printf("Global:%d\n Local:%d\n Static:%d\n",a,b,c);
}

int main(){
    int d=40;
    printf("Auto: %d\n",d);
    fun();
    fun();
    fun();
    return 0;
}

