#include <stdio.h>
#include <stdlib.h>

int *funkcja(int *a, int *b){
	if(*a>*b) return a;
	else return b;
}

int main() {
	int a=200, b=4;
	printf("%p\n",&a);
	printf("%p\n",&b);
	
	printf("%p", funkcja(&a,&b));
	return 0;
}
