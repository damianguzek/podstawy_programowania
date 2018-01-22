#include <stdio.h>
#include <stdlib.h>


void funkcja(int tab[], int r){
	int i,j;
	
	for(i=0;i<r-1;i++){
		j=i+1;
		for(j;j<r;j++){
		
			if(tab[i]==tab[j]){
				tab[j]=0;
			}
			else continue;
		}
	}	
		for(i=0;i<r;i++){
			printf("%d ",tab[i]);
		}
}

int main() {
	int r=10;
	int tablica[10]={1,1,0,4,5,4,22,18,2,0};
	funkcja(tablica,r);
	return 0;
}
