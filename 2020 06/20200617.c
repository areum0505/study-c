#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == i || j == n - 1 || j == n - i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        printf("*");
    }

    return 0;
}