#include <stdio.h>
#include <stdlib.h>


double funkcja(double napis[]){
	double n = atof(napis);
	return n;
}

int main() {
	char napis[]="1.1234";

	printf("n --> %lf", funkcja(napis));
	return 0;
}



