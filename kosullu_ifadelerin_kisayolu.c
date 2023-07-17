#include<stdio.h>
#include<stdlib.h>

int main()
{
    int score; 
    printf("Enter your exam grade: ");
    scanf("%d" , &score);
    (score>=60) ? printf("You passed the exam.\n") : printf("You failed the exam.\n");

    /* ? if anlamına gelir
       : else anlamına gelir */


    return 0;
}