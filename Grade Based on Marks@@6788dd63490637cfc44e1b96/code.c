#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='90')
    {
        printf("A");
    }
    else(a>='80') && (a<'90'){
        printf("B");
    }
    else if(a>='70' && a<'80')
    {
        printf("C");
    }
    else if(a>='60' && a<'70')
    {
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}