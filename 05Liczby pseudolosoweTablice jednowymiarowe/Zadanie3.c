#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int tablica[5];
	int i, suma=0;
	
	for(i=0;i<5;i++){
		scanf("%d", &tablica[i]);
		suma+=tablica[i];
	}
	printf("SUMA => %d\n", suma);
	printf("SREDNIA => %d", suma/5);
	
	return 0;
}
