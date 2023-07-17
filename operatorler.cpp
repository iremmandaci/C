#include <stdio.h>
#include <stdlib.h>

int main()
{
	int MyNumber1 , MyNumber2 , MyNumber3;
	printf("Enter a number:"); scanf("%d" , &MyNumber1);
	MyNumber2 = MyNumber1 + 15;
	MyNumber3 = MyNumber1 + MyNumber2;
	printf("Number1 is: %d\n" , MyNumber1);
	printf("Number2 is: %d\n" , MyNumber2);
	printf("Number3 is: %d\n" , MyNumber3);
	printf("\n\n\n\n");
	
	
	int x , y , sum , sub , multi , div  , mod;
	x = 5;
	y = 2;
	sum = x + y;
	sub = x - y;
	multi = x * y;
	div = x / y;
	mod = x % y;
	printf("Sum: %d\n" , sum );
	printf("Subtraction: %d\n" , sub);
	printf("Multiplication: %d\n" , multi);
	printf("Division: %d\n" , div);
	printf("Mod: %d\n" , mod);
	
	return 0;
}
