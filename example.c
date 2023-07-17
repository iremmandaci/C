#include <stdio.h>
#include <stdlib.h>

//girilen sayının onlar ve birler basamağını bulduran program//

int main()
{
    int sayi , onluk , birlik;
    printf("Pozitif bir sayi giriniz:");
    scanf("%d" , &sayi);
    onluk = (sayi%100) / 10; 
    birlik = sayi % 10;
    printf("Girdiginiz sayinin onlar basamagi %d , birler basamaği %d dir" , onluk , birlik);
    return 0;
}