#include <stdio.h>
#include <stdlib.h>

const int N=80;
int funkjca(int tablica[], int rozmiar){
	int i;
	int k=0;
	for(i=0;i<rozmiar;i++){
		tablica[i]=k;
		if(k>78) k=0;
		else k+=2;
	}
return tablica;
}




int main() {
	int i;
	int tablica[100];
	funkjca(tablica,100);
	
	for(i=0;i<100;i++){
		printf("%d\n", tablica[i]);
	}
	return 0;
}
