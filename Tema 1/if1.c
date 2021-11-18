#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    FILE *f;
    if(!(f=fopen("numar.in.txt","r")))
        printf ("Eroare la deschiderea fisierului text!");
    else {
        fscanf(f,"%d",&x1);
        fscanf(f,"%d",&y1);
        fscanf(f,"%d",&x2);
        fscanf(f,"%d",&y2);
        fscanf(f,"%d",&x3);
        fscanf(f,"%d",&y3);
        fclose(f);
        if ((y3-y1)/(y2-y1) == (x3-x1)/(x2-x1)) {
            printf("Punctele sunt coliniare");
        } else {
            printf("Punctele nu sunt coliniare");
        }
    }
    return 0;
}
