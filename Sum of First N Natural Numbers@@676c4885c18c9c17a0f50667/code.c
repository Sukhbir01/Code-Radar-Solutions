#include<stdio.h>
int main(){
    int n,sum;
    sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i);
        sum=sum+i;
        printf(sum);

    }
    return 0;
}