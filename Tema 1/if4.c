#include <stdio.h>
#include <string.h>
int main() {
    char ch_arr[52][13] = {"Andrei","Albert","Bogdan","Bianca","Cornel","Constantin","Dragos","Dinu","Emanuel","Emil","Florin","Florentina","George","Georgiana","Horia","Horatiu","Ion","Ioana","Jean","Jan","Karina","Kevin","Laurentiu","Lucian","Matei","Marius","Nicolae","Nicoleta","Oana","Onel","Pavel","Petre","Quinn","Quinto","Rares","Raul","Sebastian","Sorin","Tony","Tudor","Umar","Uriel","Vali","Viorica","Wilson","Wilmark","Xander","Xenia","Yvonne","Yanis","Zoran","Zac"};
    char litera;
    FILE *f,*g;
    if(!(f=fopen("litera.in.txt","r")))
        printf ("Eroare la deschiderea fisierului text!");
    else {
        fscanf(f,"%c",&litera);
        fclose(f);
        if(!(g=fopen("nume.out.txt","w")))
            printf ("Eroare la deschiderea fisierului text!");
        else {
            for (int i = 0;i<=51;i++) {
                if (tolower(ch_arr[i][0]) == tolower(litera)) {
                    fprintf(f,"%s\n", ch_arr[i]);
                }
            }
        }
    }
    return 0;
}
