#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int f;
	
	printf("Input value of x: ");
	scanf("%d", &x);
	
	f = x/70;
	
	printf("The value of f(x) is: %d", f);
	
	return 0;
	
	system("pause");
}
