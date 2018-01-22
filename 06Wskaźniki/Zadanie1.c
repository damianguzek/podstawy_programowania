#include <stdio.h>
#include <stdlib.h>




int funkcja(int *a, int *b){
	if(*a>*b) return *a;
	else return *b;   
}

int main() {
	int a=100, b=200;
	printf("%d",funkcja(&a,&b));
	return 0;
}
