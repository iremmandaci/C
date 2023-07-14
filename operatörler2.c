#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x , y , z;
	x = 6;
	y = 12;
	z = 7;
	x++;
	++y;
	z--;
	x = y++;
	x = ++y;
	z = ++x;
	z = y--;
	z = --y;
	printf("x: %d\n" , x);
	printf("y: %d\n" , y);
	printf("z: %d\n" , z);
	
	return 0;
}