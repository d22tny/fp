#include <stdio.h>
int main()
{
    int an;
    FILE *f;
    if(!(f=fopen("numar.in.txt","r")))
        printf ("Eroare la deschiderea fisierului text!");
    else {
        fscanf(f,"%d",&an);
        fclose(f);
        if ((an%100 == 0) && (an%400 == 0)) {
            printf("Anul este bisect");
        } else if ((an%100 != 0) && (an%4==0)) {
            printf("Anul este bisect");
        } else {
            printf("Anul nu este bisect");
        }
    }
    return 0;
}
