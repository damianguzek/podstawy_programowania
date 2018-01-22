#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void funkcja(int tab[], int r){
	int  i=0, suma=0;
	
	for(i=0;i<r;i++){
		if(tab[i]==1){
			suma+=pow(2,i);
		}
		else continue;	
	}
printf("%d", suma);	
}

int main() {
int rozmiar=8;
int tablica[]={1,1,1,1,1,1,1,0};
funkcja(tablica,rozmiar);	
	
	return 0;
}
