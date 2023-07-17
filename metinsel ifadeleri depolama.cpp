#include <stdio.h>
#include <stdlib.h>

int main()
{
	char MyNumber = 99;
	printf("Karakterimizin sayisal degeri : %d \n" , MyNumber);
	printf("Karakterimizin ASCII degeri: %c\n\n" , MyNumber);
	
	// 51 sayisi ASCII tablosunda 3 rakamina eslik eder
	char MyNumber1 = 51;
	printf("Karakterimizin sayisal degeri : %d \n" , MyNumber1);
	printf("Karakterimizin ASCII degeri: %c\n\n" , MyNumber1);
	
	//eger bir kelime dizisi tanimlamak istersek %s kullanmamiz gerekir
	
	char MyCity[12]="CANAKKALE";
	printf("My city is %s\n\n" , MyCity);
	
	char YourCity[5];
	printf("Enter a city: "); scanf("%s" , &YourCity);
	printf("Your city is %s" , YourCity);
	return 0;
}
