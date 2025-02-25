#include<stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&a);
    for(int i=2;i < n;i++){
        if(n%i==0){
            x++;
        }
    }
    if(x==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}