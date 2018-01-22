#include <stdio.h>
#include <stdlib.h>


 long int funkcja(char napis[]){
	long int n = atoi(napis);
	return n;
}

int main() {
	char napis[100]="1111151115511";

	printf("n --> %d", funkcja(napis));
	return 0;
}
