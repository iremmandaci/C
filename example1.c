#include <stdio.h>
#include <stdlib.h>

// Girilen 4 sayının aritmetik ortalamasını bulan program //
int main()
{
    float a , b , c, d , ortalama;
    printf(" 4 tane pozitif sayi giriniz:\n ");
    scanf("%f%f%f%f" , &a , &b , &c , &d);
    ortalama = (a+b+c+d) / 4;
    printf("Girdiginiz sayilarin aritmetik ortalamalari: %.2f" , ortalama);
    return 0;
}