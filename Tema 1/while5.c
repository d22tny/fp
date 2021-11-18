#include <stdio.h>
int main() {
    unsigned int n;
    printf("Introduceti numarul\n");
    scanf("%d", &n);
    int nr = ogl(n);
    int i = 1;
    int p = 1;
    while (nr!=0) {
        if (i%2 == 1) {
            if ((nr%10)%2 == 0) {
                p *= nr%10;
            }
        }
        i++;
        nr/=10;
    }

    if (p>1 && p<10) {
        printf("Numarul %d are doar o cifra para aflata pe pozitie impara, aceasta fiind %d", n, p);
    } else if (p == 1) {
        printf("Numarul %d nu are cifre pare aflate pe pozitii impare!", n);
    } else {
        printf("Produsul este: %d", p);
    }

    return 0;
}

int ogl (int n) {
    int numar = 0;
    while (n!=0) {
        numar = (numar * 10) + n%10;
        n/=10;
    }
    return numar;
}
