#include <stdio.h>
#include<stdlib.h>

int main()
{
    float x;
    printf("Bir sayi giriniz: ");
    scanf("%f" , &x);
    if (x>0)
    {
        printf("sayi pozitiftir.");
        if(x==100)
        {
            printf("sayi inanilmaz.");
        }
        else
        printf("sayi inanilmaz degil.");
    }     
    else if(x<0)
        printf("sayi negatiftir.");     // EĞER KOŞULLU İFADELERDEN SONRA TEK SATIR GELECEKSE SÜSLÜ PARANTEZE GEREK YOK
    else 
    {
        printf("sayi 0'dir. ");        // FAKAT BU ŞEKİLDE DE OLABİLİR
    }
    return 0;
}