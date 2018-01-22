#include <stdio.h>
#include <stdlib.h>

void funkcja(double wsk){
	free(wsk);
	wsk=NULL;	
}
int main() {
	double *a;
	a=(double*) malloc (sizeof *a);
	funkcja(a);

	if(a==NULL)
		printf("jest NULL");
	else 
		printf("NIE jest  NULL");
	return 0;
}
