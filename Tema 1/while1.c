#include<stdio.h>
void main()
{
    int b,n,i,r,digit,p,count=0;
    char a[100];
    printf("\nIntroduceti numarul in baza 10:\n");
    scanf("%d",&n);
    printf("\nIntroduceti baza in care sa fie convertit:\n");
    scanf("%d",&b);
    p=n;
    while (p!= 0) {
        r=p%b;
        digit='0'+r;
        if(digit>'9') {
            digit=digit+7;
        }
        a[count]=digit;
        count++;
        p=p/b;
    } 
    printf("\nbase %d equivalent of num %d is ",b,n);
    for(i=count-1;i>=0;--i)
    printf("%c",a[i]);
    printf(".\n");
}
