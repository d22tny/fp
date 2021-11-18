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

/*
#include<stdio.h>
#include <string.h>
int main()
{
    int nr,baza,rest,cifra;
    int index = 0;
    printf("Introduceti numarul in baza 10:\n");
    scanf("%d",&nr);
    printf("Introduceti baza in care sa fie convertit:\n");
    scanf("%d",&baza);
    int nrinitial = nr;
    int nrNou = 0;
    while (nr!= 0) {
        rest=nr%baza;
        nrNou = (nrNou * 10) + rest;
        index++;
        nr/=baza;
    }
    printf("Numarul %d in baza %d este %d",nrinitial,baza,nrNou);
    return 0;
}
*/ // asa nu e bine in momentul in care am un 0 la final, spre exemplu 10 -> baza 2
// ar trebui sa fie 1010 dar programul asta returneaza 101 deoarece prima oara ii da 0
// face 10 * 0 (nrNou) care e tot 0 si aduna cifra si in loc de 10 ramane la 1 
// acuma nu stiu daca ar trebui hardcodat toate posibilitatile in care s-ar intampla asa
// eu vad varianta cu string mult mai eficienta.