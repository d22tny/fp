#include<stdio.h>
#include <string.h>
int main()
{
    int nr,baza,rest,cifra;
    char nrConvertit[100];
    int index = 0;
    printf("Introduceti numarul in baza 10:\n");
    scanf("%d",&nr);
    printf("Introduceti baza in care sa fie convertit:\n");
    scanf("%d",&baza);
    int nrinitial = nr;
    while (nr!= 0) {
        rest=nr%baza;
        cifra='0'+rest;
        nrConvertit[index]=cifra;
        index++;
        nr/=baza;
    }
    printf("Numarul %d in baza %d este %s",nrinitial,baza,strrev(nrConvertit));
    return 0;
}
