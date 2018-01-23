#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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

void suma_max(int **tab, int m, int n)
{
	int i, j, suma=0, wiersz, p=0;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			p+=tab[i][j];
			if(suma<p){
				suma=p;
				wiersz=i;
			}
			
	}
	printf("%d", wiersz);
}



int main(){
	int m,n;
	scanf("%d", &m);
	scanf("%d", &n);
	funkcja(m,n);
	int **a = funkcja(m,n);
	uzupelnij(a,m,n);
	suma_max(a,m,n);
	
}
