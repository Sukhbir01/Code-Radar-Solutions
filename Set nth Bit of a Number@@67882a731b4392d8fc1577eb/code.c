#include <stdio.h>

int main() {
    int number, n, result;
    scanf("%d %d", &number, &n);
    result = number | (1 << n);
    printf("%d\n",result);

    return 0;
}