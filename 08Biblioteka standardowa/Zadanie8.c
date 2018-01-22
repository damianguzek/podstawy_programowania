#include <stdio.h>
#include <stdlib.h>


int sortowanie(int tab[], int r){
	int i, j,k;
for(j=0;j<r;j++)	
	for(i=1;i<r;i++){
		if(tab[i]<tab[i-1]){
			k=tab[i];
			tab[i]=tab[i-1];
			tab[i-1]=k;
		}
	}
	
	
	for(i=1;i<r;i++){
		printf("%d,", tab[i]);
	}
	
return 0;
}
	
	








int main(int argc, char *argv[]) {
	int tablica[10]={1,3,2,4,6,5,8,7,10,9};
	sortowanie(tablica,10);
	return 0;
}
