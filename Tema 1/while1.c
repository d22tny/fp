#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,newm,newn;
    printf("Introduceti numaratorul fractiei\n");
    scanf("%d", &m);
    printf("Introduceti numitorul fractiei\n");
    scanf("%d", &n);
    if (cmmdc(m,n) != 1) {
        newm = m/cmmdc(m,n);
        newn = n/cmmdc(m,n);
        printf("Fractia \n%d\n--\n%d\n\na fost simplificata. Aceasta a ajuns in forma \n\n%d\n--\n%d\n , care este ireductibila",m,n,newm,newn);
    } else {
        printf("Fractia nu poate fi simplificata!");
    }
    return 0;
}

int cmmdc(int a, int b) {
    while (a!=b) {
        if (a>b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}