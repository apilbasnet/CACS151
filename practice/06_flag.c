#include<stdio.h>

int main() {
    int i, j;

    for ( i = 0; i < 20; i++) {
        for ( j = 0; j < i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

    for ( i = 0; i < 10; i++) {
        printf(" *  *\n");
    }
    
    return 0;
}