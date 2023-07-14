#include<stdio.h>
#include<stdlib.h>

int main()
{
    float OncekiBirimKWSaatUcreti , YeniBirimKWSaatiUcreti , OncekiAbonelikUcreti , YeniAbonelikUcreti;
    float enflasyon , fatura , HarcananElektrik , EskiOkuma , YeniOkuma;

    printf("\nÖnceki ayin birim kw saat ücretini giriniz: ");
    scanf("%f" , &OncekiBirimKWSaatUcreti);
    printf("\nÖnceki ayin abonelik ücretini giriniz: ");
    scanf("%f" , &OncekiAbonelikUcreti);
    printf("\nEnflasyonu giriniz: ");
    scanf("%f" , &enflasyon);
    printf("\nÖnceki aya ait okuma değerini giriniz: ");
    scanf("%f" , &EskiOkuma);
    printf("\nBu aya ait okuma değerini giriniz: ");
    scanf("%f" , &YeniOkuma);
 
    YeniBirimKWSaatiUcreti = OncekiBirimKWSaatUcreti + OncekiBirimKWSaatUcreti * enflasyon / 100;
    YeniAbonelikUcreti = OncekiAbonelikUcreti + OncekiAbonelikUcreti *enflasyon / 100;
    HarcananElektrik = YeniOkuma - EskiOkuma;
    fatura = HarcananElektrik * YeniBirimKWSaatiUcreti + YeniAbonelikUcreti;
    printf("\nBu ayin fatura değeri: %f TL'dir." , fatura);

    return 0;
}