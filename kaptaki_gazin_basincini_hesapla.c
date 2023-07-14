/*KAPALI BİR KAPTAKİ GAZIN BASINICI HESAPLAYAN PROGRAM
  basınç = (mol sayısı * R sabiti * sıcaklık) / hacim
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    float pressure , constantR;
    int NumberOfMoles , volume , heat;
    constantR= 0.82;
    
    printf("Mol sayisini giriniz:");
    scanf("%d" , &NumberOfMoles);
    printf("Kabin hacmini giriniz:");
    scanf("%d" , &volume);
    printf("Sicakligi giriniz:");
    scanf("%d" , &heat);
    pressure = (NumberOfMoles * constantR * heat) / volume;
    printf("Kapali kaptaki gazin basinci: %.2f " , pressure);

    return 0;
}