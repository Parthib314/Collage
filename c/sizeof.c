#include<stdio.h>
#include<stdbool.h>

int sum(int a,int b,int c){
    return a+b+c;
}

int sumd(int n){
    int c=0;
    while(n!=0){
        int l=n%10;
        c+=l;
        n/=10;
    }
    return c;
}

bool isPrime(int n){
    bool c=true;
   if(n<2){
     c=false;
   }else{
      for(int i=2;i<n;i++){
        if(n%i==0){
            c=false;
            break;
        }
      }
   }
   return c;
}

void fac(){
    int c=1;
    printf("0!= %d\n",1);
    for(int i=1;i<=10;i++){
        c*=i;
        printf("%d!= %d\n",i,c);
    }
    return;
}

int rfac(int n){
    if(n<2){
        return 1;
    }else{
        return n*rfac(n-1);
    }
}

int gcd(int x,int y){
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}

// Call by value
void print1(int a){
    printf("%d\n",a);
}
// Call by reference
void print2(int *a){
    printf("%d\n",*a);
}

int main()
{
    int a=10;
    printf("%d\n",sum(1,2,3));
    printf("%d\n",sumd(1256));
    for(int i=0;i<16;i++){
        if(isPrime(i)){
            printf("%d\n",i);
        }
    }
    fac();
    printf("%d\n",rfac(8));
    printf("%d\n",gcd(12,5));
    print1(a);
    print2(&a);
    return 0;
}