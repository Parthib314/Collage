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

<<<<<<< HEAD
=======

/*Auto: 41
Global:11
 Local:21
 Static:31
Global:12
 Local:21
 Static:32
Global:13
 Local:21
 Static:33
 */
>>>>>>> 09dd1e37f5aa351d446bd7ea16cd2d49e69ca4a5
