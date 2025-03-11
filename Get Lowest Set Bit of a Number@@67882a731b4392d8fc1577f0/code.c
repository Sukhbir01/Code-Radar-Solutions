#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        int position = log2(num & -num) + 1;
        printf("%d\n", position);
    }

    return 0;
}