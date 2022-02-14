#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] = {7, 5, 2, 4, 3};

    for (int i = 0; i<5; i++) {
        printf("%d", z[i]);
    }
}

int bubbleSort() {
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j<n-1; j++) {
            if (x[j] > x[j+1]) {
                int aux = x[j];
                x[j] = x[j+1];
                x[j+1] = aux;
            }
        }
    }
}

int numarareSort() {
    int count[];
    int z[];

    for (int i = 0; i<5; i++){
        count[i] = 0;
    }

    for(int i = 0;i<n;i++) {
        for (int j=0;j<i;j++) {
            if (x[j] > x[i]) {
                count[j]++;
            } else {
                count[i]++;
            }
        }
    }

    for(int i = 0; i<n; i++) {
        z[count[i]] = x[i];
    }
}

int selectionSort() {
    for (int i = 0; i < n-1; i++) {
        int l = i;
        int min = x[i];
        for (int j = i+1; j<n; j++) {
            if (x[j] < min) {
                min = x[j];
                l=j;
            }
        }
        x[l] = x[i];
        x[i] = min;
    }
}

int insertieDirectaSort() {
    for (int i = 1;i<n;i++)  {
        int j = i-1;
        int terminat = 0;
        int aux = x[i];
        do {
            if (aux<x[j]) {
                x[j+1] =  x[j];
                j--;
            } else {
                terminat = 1;
            }
        } while ((j!=-1) && (terminat == 0));
    }
}

int insertieBinaraSort() {
    for (int i = 1; i<n;i++) {
        int aux = x[i];
        int inc = 0;
        int sf = i-1;
        while (inc < sf) {
            int med = (inc+sf)/2;
            if(aux<x[med]) {
                sf = med-1;
            } else {
                inc = med+1;
            }
        }
        for (int j = i-1; j>=inc;j--) {
            x[j+1] = x[j];
        }
        x[inc] = aux;
    }
}

int quickSort(int p, int  u) {
    int i,j,aux;
    i = p;
    j = u;
    if (i>=j) return;
    while (i<j) {
        while (x[i]<x[j]) {
            i++;
        }
        if (x[i] > x[j]) {
            aux = x[i];
            x[i] =  x[j];
            x[j] = aux;
            j--;
        }
        while (x[i] < x[j]) {
            j--;
        }
        if (x[i]>x[j]) {
            aux = x[i];
            x[i] =  x[j];
            x[j] = aux;
            i++;
        }
    }
    getch();
    quickSort(p,i-1);
    quickSort(i+1, u);
}


