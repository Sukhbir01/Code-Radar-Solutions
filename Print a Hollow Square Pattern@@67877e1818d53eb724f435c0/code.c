#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n; j++) {
            // Print '*' for the first and last row, or first and last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");  // Print space inside
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}