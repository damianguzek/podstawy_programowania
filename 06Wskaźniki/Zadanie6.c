#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,i,j;
	float suma=0, min, max; 
	
	scanf("%d", &n);
	float *tablica=malloc(sizeof(float*)*n);
	
	for(i=0;i<n;i++){
		scanf("%f", &tablica[i]);
	}
	for(i=0;i<n;i++){
		suma+= *(tablica+i);
	}
	
	printf("suma-> %f, \nsrednia->%f", suma, suma/n);
	
	min=tablica[0];
		for(i=0;i<n;i++){
			if(tablica[i]<min){
			min=tablica[i];
			}
	
		}
	max=tablica[0];
		for(i=0;i<n;i++){
			if(tablica[i]>max){
			max=tablica[i];
		}
	}
	
	printf("\nmin %f\nmax %f ", min, max);
	
	return 0;
}
