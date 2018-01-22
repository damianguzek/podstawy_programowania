#include <stdio.h>
#include <stdlib.h>



int funkcja(int *x, int *y, int a, int b){
	if(x==y) return a+b;
	else return a*b;
	
	
}






int main(int argc, char *argv[]) {
	int *x, *y;
	int a=5, b=5;
	printf("%d", funkcja(&y,&y,a,b));
	
	return 0;
}
