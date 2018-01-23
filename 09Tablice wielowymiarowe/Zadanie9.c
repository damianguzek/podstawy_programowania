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

void wyznacznik(int **tab)
{
	
	int w=
	 (tab[0][0]*tab[1][1]*tab[2][2])+
	 (tab[0][1]*tab[1][2]*tab[2][0])+
	 (tab[2][0]*tab[1][1]*tab[0][2])-
	 (tab[2][1]*tab[1][2]*tab[0][0])-
	 (tab[2][2]*tab[1][0]*tab[0][1]);
	 printf("%d", w);
}

int main(){
	int m,n;
	scanf("%d", &m);
	scanf("%d", &n);
	int **a = funkcja(m,n);
	int **b = funkcja(m,n);
	uzupelnij(a,m,n);
	wyznacznik(a);
	
}
