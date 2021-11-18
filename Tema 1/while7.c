#include <stdio.h>
int main () {
    int n;
    FILE *f;
    printf("Introduceti n\n");
    scanf("%d", &n);
    int nrsalvat = n;
    int nr = 0;
    while (nrsalvat!=0) {
        nr++;
        nrsalvat/=10;
    }
    int nrsalvat2 = n;
    if(!(f=fopen("numar.out.txt","w"))) {
        printf("Eroare la deschiderea fisierului text!");
    } else {
        if (nr%2==1) {
            fprintf(f,"nr: %d", (nrsalvat2/1000)*100 + nrsalvat2%100);
        } else {
            fprintf(f, "nr: %d", oglinditNormal(oglinditDarScoatemCele2CifreDinMijloc(nrsalvat2, nr)));
        }
    }
}

int oglinditDarScoatemCele2CifreDinMijloc (int n, int lungime) {
    int numar = 0;
    int contorizare = 0;
    while (n!=0) {
        if ((lungime/2!=contorizare)&&((lungime/2)-1 != contorizare)) {
            numar = (numar * 10) + n%10;
        }
        n/=10;
        contorizare++;
    }
    return numar;
}

int oglinditNormal (int n) {
    int numar = 0;
    while (n!=0) {
        numar = (numar * 10) + n%10;
        n/=10;
    }
    return numar;
}
