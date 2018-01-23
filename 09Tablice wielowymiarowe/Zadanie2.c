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

int funkcja1(double **tab, int n, int m)
{
int i=0;
	for(i=0;i<m;i++){
		free(tab[i]);
	}
	free(tab);	
}





int main(){
	int m,n;
	scanf("%d", &m);
	scanf("%d", &n);
	funkcja(m,n);
	int *a = funkcja(m,n);
	funkcja1(a,m,n);
	
}

