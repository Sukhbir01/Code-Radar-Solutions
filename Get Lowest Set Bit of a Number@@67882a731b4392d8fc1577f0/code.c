#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf(".\n");
    } else {
        int lowest_set_bit = num & -num;
        printf("%d\n", lowest_set_bit);
    }

    return 0;
}