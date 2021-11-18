#include <stdio.h>
#include <string.h>

int converteste(char *nrConvertit, int baza)
{
    int exponent = 1;
    int nr = 0;
    int i = strlen(nrConvertit) - 1;
    while (i >= 0) {
        nr += (int)(nrConvertit[i] - '0') * exponent;
        exponent = exponent * baza;
        i--;
    }

    return nr;
}

int main()
{
    char nrConvertit[] = "";
    int baza;
    printf("Introduceti numarul\n");
    scanf("%s", &nrConvertit);
    printf("Introduceti baza\n");
    scanf("%d", &baza);
    printf("Numarul %s in baza %d este %d in baza 10", nrConvertit, baza, converteste(nrConvertit, baza));
    return 0;
}
