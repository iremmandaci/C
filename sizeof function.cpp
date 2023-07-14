#include <stdio.h>
#include <stdlib.h>

int main()
{
	char MyLetter= 'a';
	int MyNumber= 3;
	float MyNumber2= 3.14;
	double MyNumber3= 225.647;

	/* int MyNumber4= sizeof(char);
       printf("char size: %d\n" , MyNumber4 );
	*/ 
	// yukaridaki kullanim asagidakinden daha dogru 
	
	printf("char size: %d \n", sizeof(char));
	printf("int size: %d \n", sizeof(int));
	printf("float size: %d \n", sizeof(float));
	printf("double size: %d \n", sizeof(double));
	return 0;
}
