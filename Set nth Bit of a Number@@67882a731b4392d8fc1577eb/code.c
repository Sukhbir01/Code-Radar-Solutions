#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int main() {
    scanf("%d %d",&num,&n);
    
    int result = setNthBit(num, n);
    
    printf("%d\n", num, num);
    printf("%d\n", result, result);
    
    return 0;
}