#include<stdio.h>
void main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c == '+'){
        printf(a+b);
    }
    else if(c == '-'){
        printf(a-b);
    }
    else if(c == '*'){
        printf(a*b);
    }
    else{
        printf("a/b");
    }
    return 0;
}