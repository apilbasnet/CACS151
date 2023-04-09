#include<stdio.h>

int main() {
    int i, j;

    for (i = 5; i > 0; i--) {
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        for (j = 0; j < i; j++) {
            printf("%d ", (j + i) % 2 != 0);
        }

        printf("\n");
    }

    return 0;
}