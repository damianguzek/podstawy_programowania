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

void uzupelnij(int **tab, int m, int n)
{
	int i=0, j=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d", &tab[i][j]);
	}
}

void suma(int **tab, int m, int n)
{
	int i, j, suma=0;
		for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			suma+=tab[i][j];
	}
	printf("%d", suma);
}



int main(){
	int m,n;
	scanf("%d", &m);
	scanf("%d", &n);
	funkcja(m,n);
	int **a = funkcja(m,n);
	uzupelnij(a,m,n);
	suma(a,m,n);
	
}
