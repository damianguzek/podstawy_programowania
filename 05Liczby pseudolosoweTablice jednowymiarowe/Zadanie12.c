#include <stdio.h>
#include <stdlib.h>


void funkcja(int liczba){
	int i,j,l=-1;
	int tablica[100];
	
	for(i=0;i<100;i++){
		if(liczba>0){
			tablica[i]=liczba-((liczba/2)*2);
			liczba=liczba/2;
			l++;
//				printf("%d\n", l);
		}
		else break;
	}
	for(i=0;i<=l;i++){
		printf("%d", tablica[i]);
	}
}







int main() {
	funkcja(205);
	return 0;
}
