#include <stdio.h>
#include <stdlib.h>

int **funkcja(int n, int m)
{
	
	int i=0;
	
	double **tab= malloc(sizeof(double**)*n);
	
	for(i=0;i<n;i++)
	{
	 tab[i]=malloc(sizeof(double**)*m);
	}
	
	return tab;
}

int main(){
	int m,n;
	scanf("%d", &m);
	scanf("%d", &n);
	
	printf("%p", funkcja(m,n));
}
