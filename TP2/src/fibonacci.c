#include <stdio.h>
int main() {
    int n, i;
    int u0 = 0, u1 = 1, u;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);
    printf("Suite de Fibonacci jusqu'à U%d :\n", n);
    if (n >= 0) printf("%d ", u0);
    if (n >= 1) printf("%d ", u1);
    for (i = 2; i <= n; i++) {
        u = u0 + u1;
        printf("%d ", u);
        u0 = u1;
        u1 = u;
    }
    printf("\n");
    return 0;
}
