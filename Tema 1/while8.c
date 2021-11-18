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
        printf("Numarul cu eliminarea cifrelor pare este: %d\n", ogl(oglinditDarScoatemCifre(n,1)));
        printf("Numarul cu eliminarea cifrelor impare este: %d\n", ogl(oglinditDarScoatemCifre(n,0)));
    }
    return 0;
}

int oglinditDarScoatemCifre (int n, int tip) {
    int numar = 0;

    while (n!=0) {
        if ((n%10)%2 == tip) {
            numar = (numar * 10) + n%10;
        }
        n/=10;
    }

    return numar;
}

int ogl (int n) {
    int numar = 0;
    while (n!=0) {
        numar = (numar * 10) + n%10;
        n/=10;
    }
    return numar;
}
