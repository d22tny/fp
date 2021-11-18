#include <stdio.h>
#include <string.h>
int main() {
    float parteRealaA, parteRealaB, parteImaginaraA, parteImaginaraB;
    char operatie;
    FILE *f;
    printf("Introduceti partea reala a primului numar complex\n");
    scanf("%f", &parteRealaA);
    printf("Introduceti partea imaginara a primului numar complex\n");
    scanf("%f", &parteImaginaraA);
    printf("Introduceti partea reala pentru al doilea numar complex\n");
    scanf("%f", &parteRealaB);
    printf("Introduceti partea imaginara pentru al doilea numar complex\n");
    scanf("%f", &parteImaginaraB);
    printf("Introduceti operatia pe care doriti sa o efectuati cu cele doua numere [+];[-];[*];[/]\n");
    operatie=getche();
    if(!(f=fopen("operatie.out.txt","w"))) {
        printf("Eroare la deschiderea fisierului text!");
    } else {
        switch(operatie) {
            case'+':
                fprintf(f,"%f+%fi\n",parteRealaA+parteRealaB,parteImaginaraA+parteImaginaraB);
                break;
            case'-':
                fprintf(f,"%f+%fi\n",parteRealaA-parteRealaB,parteImaginaraA-parteImaginaraB);
                break;
            case'*':
                fprintf(f,"%f+%fi\n",((parteRealaA*parteRealaB)-(parteImaginaraA*parteImaginaraB)),((parteImaginaraA*parteRealaB)+(parteRealaA*parteImaginaraB)));
                break;
            case'/':
                if (parteRealaB != 0 && parteImaginaraB) != 0 {
                    fprintf(f,"%f+%fi\n",((parteRealaA*parteRealaB) + (parteImaginaraA*parteImaginaraB)/((parteRealaA*parteRealaA) + (parteRealaB*parteRealaB))), ((parteRealaB*parteImaginaraA) - (parteRealaA*parteImaginaraB))/((parteRealaA*parteRealaA) + (parteRealaB*parteRealaB)));
                } else {
                    fprintf(f,"Operatia nu poate avea loc.");
                }

                break;
            default:
                fprintf(f,"Caracter invalid\n");
                break;
        }
        fclose(f);
    }
    return 0;
}
