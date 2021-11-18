#include <stdio.h>
int main()
{
    int a,b,c;
    FILE *f;
    if(!(f=fopen("numere.in.txt","r")))
        printf ("Eroare la deschiderea fisierului text!");
    else {
        fscanf(f,"%d",&a);
        fscanf(f,"%d",&b);
        fscanf(f,"%d",&c);
        fclose(f);
        if ((c-b) == (b-a)) {
            printf("Numerele pot fi termenii unei progresii aritmetice\n");
        } else {
            printf("Numerele nu pot fi termenii unei progresii aritmetice\n");
        }
        if ((b/a) == c/b) {
            printf("Numerele pot fi termenii unei progresii geometrice\n");
        } else {
            printf("Numerele nu pot fi termenii unei progresii geometrice\n");
        }

        if (b == ((2*a*c)/(a+c))) {
            printf("Numerele pot fi termenii unei progresii armonice\n");
        } else {
            printf("Numerele nu pot fi termenii unei progresii armonice\n");
        }

    }
    return 0;
}
