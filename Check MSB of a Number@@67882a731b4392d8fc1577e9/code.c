#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int msb = 1 << (sizeof(int) * 8 - 1);

    if (num & msb)
        printf("MSB is set (1)\n");
    else
        printf("MSB is not set (0)\n");

    return 0;
}