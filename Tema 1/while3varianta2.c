#include <stdio.h>
int main()
{
    int baza,numar;
    printf("Introduceti numarul\n");
    scanf("%d", &numar);
    printf("Introduceti baza\n");
    scanf("%d", &baza);
    int nrNou = 0;
    int nrsalvat = numar;
    int pb = 1;
    while (numar != 0) {
        nrNou = nrNou + (numar%10)*pb;
        pb = pb*baza;
        numar/=10;
    }
    printf("Numarul %d in baza %d este %d in baza 10", nrsalvat, baza, nrNou);
    return 0;
}
