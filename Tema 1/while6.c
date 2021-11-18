#include <stdio.h>
int main()
{
    int n;
    FILE *f;
    if(!(f=fopen("numar.in.txt","r")))
        printf ("Eroare la deschiderea fisierului text!");
    else {
        fscanf(f,"%d",&n);
        fclose(f);
        int nrsalvat = n;
        int nrsalvat2 = n;
        int maxim,minim,nrminim,nrmaxim;
        maxim = nrsalvat%10;
        minim = nrsalvat%10;
        nrminim = 0;
        nrmaxim = 0;
        while (nrsalvat!=0) {
            if (nrsalvat%10 > maxim) {
                maxim = nrsalvat%10;
            }
            if (nrsalvat%10 < minim) {
                minim = nrsalvat%10;
            }
            nrsalvat/=10;
        }

        while (nrsalvat2!=0) {
            if (nrsalvat2%10 == maxim) {
                nrmaxim += 1;
            }
            if (nrsalvat2%10 == minim) {
                nrminim += 1;
            }
            nrsalvat2/=10;
        }
        printf("Numarul dat este: %d\nCea mai mica cifra: %d, intalnita de %d ori\nCea mai mare cifra: %d, intalnita de %d ori", n, minim, nrminim, maxim, nrmaxim);
    }
    return 0;
}
