#include <stdio.h>
#include <stdlib.h>



int funkcja(int tablica[], int tablica1[],int tablica2[], int rozmiar){
	int i=0, j=0, k=0;
	
	for(i=0;i<2*rozmiar;i++){
		if(i%2==0)
		{
			tablica[i]=tablica1[j];
			j++;
		}
		else
		{
			tablica[i]=tablica2[k];
			k++;
		}
	}	
return 0;
}









int main(int argc, char *argv[]) {
	int rozmiar=5,i;
	int tablica[10];
	int tablica1[]= {1,1,1,1,1};
	int tablica2[]= {5,5,5,5,5};
	funkcja(tablica,tablica1,tablica2,rozmiar);
	for(i=0;i<2*rozmiar;i++)
	{
		printf(" -> %d\n", tablica[i]);
	}
	return 0;
}
