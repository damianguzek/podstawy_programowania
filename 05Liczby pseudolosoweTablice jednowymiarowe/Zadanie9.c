#include <stdio.h>
#include <stdlib.h>


int funkcja(int tab[],int r){
int i, j,k, t;

for(t=0;t<r;t++){
	for(i=0;i<r;i++){
		for(j=1;j<r;j++){
			if(tab[i]>=tab[i-1]) continue;
			else
			{
				k=tab[i];
				tab[i]=tab[i-1];
				tab[i-1]=k;
			}
		}	
	}
}
	
	for(i=0;i<r;i++)
	{
			printf("%d  ", tab[i]);		
	}
			
return tab[r-2];	
}




int main() {
	int r=10;
	int tablica[10]={1,7,3,4,5,6,22,18,4,0};
	printf("\n\t%d",funkcja(tablica,r));
	return 0;
}
