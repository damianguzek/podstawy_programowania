#include <stdio.h>
#include <stdlib.h>

void funkcja(int tablica1[],int tablica2[], int tablica3[], int r){
	int i;
	
	int *tablica4=malloc(sizeof(int*)*r);
	
	for(i=0;i<r;i++){
		if(tablica1[i]>=0){
			tablica4[i]=tablica2[i];
		}
		else tablica4[i]=tablica3[i];
	}
	
		for(i=0;i<r;i++){
			printf("%d\n", tablica4[i]);
		}
}







int main(int argc, char *argv[]) {
	
	int r=5;
	int tablica1[]={-1,0,3,-4,10};
	int tablica2[]={1,2,3,4,5};
	int tablica3[]={10,99,3,13,5};
	funkcja(tablica1,tablica2,tablica3,r);	
	
	
	return 0;
}
