#include <stdio.h>
#include <stdlib.h>

int main(){
	int b;
	int a;
	
	printf("Enter birth year: ");
	scanf("%d", &b);
	
	a = 2016 - b;
	
	printf("Approximate Age: %d", a);
	
	return 0;
	
	system("pause");
}
