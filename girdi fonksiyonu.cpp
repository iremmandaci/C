#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main()
{
	float MyNumber;
	printf("Enter a number:"); scanf("%f" , &MyNumber);
	printf("The number you entered is %.2f " , MyNumber);
	
	/*DAIRENIN CEVRESI VE ALANINI HESAPLAMA
	float PI;
	PI=3.14;
	gibi tanimlanarak da yapilabilir
	*/
	float r , circumference , area;
	printf("\nDairenin yaricapini giriniz:"); scanf("%f" , &r);
	circumference = 2*PI*r;
	area = PI*pow(r,2);
	printf("Dairenin cevresi : %f Dairenin alani : %f dir" , circumference , area);
		
	return 0;
	
}
