#include <stdio.h>
#include <stdlib.h>

int main()
{
	// eger ayni degisken ismine 2 deger atarnirsa sonuncusu kabul edilmis olur
	int MyNumber;
	MyNumber=7;
	MyNumber=19;
	printf("My number is: %d\n" , MyNumber);
	
	// MyNumber1=MyNumber2=MyNumber3= 14; yazarsak hepsi 14'e esit olmus olur

	//TOPLAMA
	int MyNumber1 , MyNumber2 , MyNumber3 , sum;
	MyNumber1= 7;
	MyNumber2= 25;
	MyNumber3= 14;
	sum = MyNumber + MyNumber2 + MyNumber3;
	printf("sum: %d\n" , sum);
	
	//CIKARMA - CARPMA - BOLME
	float MyNumber4 , MyNumber5 , MySum , MyExtraction , MyMultiplication , MyDivision ;
	MyNumber4 = 24;
	MyNumber5 = 5;
	MySum = MyNumber4 + MyNumber5;
	MyExtraction = MyNumber4 - MyNumber5;
	MyMultiplication = MyNumber4 * MyNumber5;
	MyDivision = MyNumber4 / MyNumber5;
	
	printf("My Sum: %f\n" , MySum);
	printf("My Extraction: %f\n" , MyExtraction);
	printf("My Multiplication: %0.f\n" , MyMultiplication);
	printf("My Division: %0.2f\n" , MyDivision);
	
	return 0;
}
