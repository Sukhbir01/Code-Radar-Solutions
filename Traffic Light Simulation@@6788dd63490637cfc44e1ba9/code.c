#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a=='R'){
        printf("Stop");
    }
    else if('G'){
        printf("Go");
    }
    else if('Y'){
        ptintf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}