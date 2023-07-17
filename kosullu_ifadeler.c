#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x , y;
    printf("2 tane pozitif sayi giriniz: ");
    scanf("%f%f" , &x , &y);
     if (x<y)
     {
        printf("%.1f sayisi %.1f sayisindan kucuktur." , x , y);
     }
     else if (x>y)
     {
        printf("%.1f sayisi %.1f sayisindan buyuktur." , x , y);
     }
     else
     {
        printf("sayilar birbirine esittir." , x , y);
     }

    return 0;

}