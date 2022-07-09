#include<stdio.h>
#include<stdbool.h>

bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
        return true;
    }
    return false;
}

int main(){
    char c[100];
    int v=0,con=0;
    for(int i=0;i<100;i++){
        c[i]='*';
    }
    fgets(c,sizeof(c),stdin);
    for(int i=0;i<100;i++){
        if(c[i]>='a' && c[i]<='z' || c[i]>='A' && c[i]<='Z'){
            if(isVowel(c[i])){
                v++;
            }else{
                con++;
            }
        }
    }
    printf("%d\t",v);
    printf("%d\t",con);
    return 0;
}
