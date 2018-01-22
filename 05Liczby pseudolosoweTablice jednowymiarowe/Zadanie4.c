#include <stdio.h>
#include <stdbool.h>


int funkcja(int tab[]){
	int i, suma=0;
	
	for(i=0;i<5;i++){
		scanf("%d", &tab[i]);
		suma+=pow(tab[i],2);
	}
	if(suma>30) return true;
	else return false;
}


int main() {
	int tablica[5];
	printf(funkcja(tablica)? "T":"F");
	return 0;
}
