#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float liczba;
	char tekst[100];
	gets(tekst);
	char a;
	float f1, f2;
	liczba = strtof (tekst,a);

	
	
	printf("%f",liczba);
return 0;
}
