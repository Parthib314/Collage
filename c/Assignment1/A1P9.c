#include<stdio.h>
int main()
{
    float f;
    printf("Fahrenheit: ");
    scanf("%f",&f);
    printf("Centigrade %0.2f", (f-32)*5/9);
    return 0;
}