#include <stdio.h>
int main() {
    unsigned int n, ok = 0;
    printf("Introduceti numarul: ");
    scanf("%d", &n);
    int i = 2;
    while (i <= n/2) {
        if (n % i == 0) {
            ok = 1;
            break;
        }
        i++;
    }

    if (n == 1) {
        printf("1 nu este prim.");
    }
    else {
        if (ok == 0) {
            printf("%d este prim.", n);
        }
        else {
            printf("%d nu este prim.", n);
        }
    }

    return 0;
}
