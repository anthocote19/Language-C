#include <stdio.h>

int main() {
    int n, i, j;
    do {
        printf("Entrez un entier strictement positif : ");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
