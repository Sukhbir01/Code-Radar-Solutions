#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b) && (a>c)){
        printf("%d");
    }
    else if (b>c){
        printf("%d");
    }
    else{
        printf("%d")
    }
    return 0;
}