#include <stdio.h>
#include <stdlib.h>

float *funkcja(){

int *tablica=malloc(sizeof(float));	

return tablica;
}

int main() {
	int a=200, b=4;
	printf("%p\n",&a);
	printf("%p\n",&b);
	
	printf("%p", funkcja());
	return 0;
}
