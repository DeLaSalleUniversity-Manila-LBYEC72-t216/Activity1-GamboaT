#include <stdio.h>
#include <stdlib.h>

int main(){
	int height;
	int base;
	int area;
	
	printf("Enter height of triangle: ");
	scanf("%d", &height);
	printf("Enter base of triangle: ");
	scanf("%d", &base);
	
	area = (base*height)/2;
	printf("Area is: %d", area);
	
	return 0;
	system("pause");
}
