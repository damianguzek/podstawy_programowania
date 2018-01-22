#include <stdio.h>
#include <stdlib.h>

float funkcja(char napis[]){
	float n = atoi(napis);
	return n;
}

int main() {
	char napis[100]="1111151115511";

	printf("n --> %f", funkcja(napis));
	return 0;
}
