#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    num = num ^ (1 << n);

    printf("Number after toggling %d-th bit: %d\n", n, num);

    return 0;
}